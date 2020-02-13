/*
 * _notes.h
 *
 *  Created on: 13. feb. 2020
 *      Author: teig
 */


#ifndef NOTES_H_
#define NOTES_H_

==== NEWEST AT THE TOP ====


/*
 * main.xc
 *
 *  Created on: 12. feb. 2020
 *      Author: teig
 *      Ver 0.50 2020.02.13 Starts workers in 4 sequences and workers simulate random work
 */

#include <platform.h> // core
#include <stdio.h>
#include <timer.h> // delay_milliseconds(200), XS1_TIMER_HZ etc
#include "random.h" // xmos. Also uses "random_conf.h"
#include <iso646.h>

#define DEBUG_PRINT_TEST 1
#define debug_print(fmt, ...) do { if(DEBUG_PRINT_TEST) printf(fmt, __VA_ARGS__); } while (0)

typedef enum {false,true} bool;
typedef signed int time32_t;
typedef unsigned worked_ms_t; // log.log_worked_ms

typedef interface worker_if_t {
    void async_start (void);
    [[notification]]
    slave void finished_expect_get_result (void);
    [[clears_notification]]
    worked_ms_t get_result (void);
} worker_if_t;

#define NUM_WORKERS 4

[[combinable]]
void worker_task (server worker_if_t i_worker, const unsigned index_of_server) {
    timer       tmr;
    time32_t    time_ticks; // To 100 in 1 us
    bool        doCollectData = false;
    worked_ms_t sim_work_ms = 0;
    unsigned    random_seed = random_create_generator_from_seed(index_of_server); // xmos
    unsigned    random_work_delay_ms;

    debug_print ("worker_task %u\n", index_of_server);

    while (1) {
        select {
            case i_worker.async_start () : {
                doCollectData = true;
                random_work_delay_ms = random_get_random_number (random_seed) % 100; // [0..99]
                sim_work_ms = random_work_delay_ms;
                tmr :> time_ticks; // now
                time_ticks += (sim_work_ms * XS1_TIMER_KHZ); // Simulate work
            } break;
            case (doCollectData == true) => tmr when timerafter (time_ticks) :> void : {
                // Now we have simulated that picking up log.log_worked_ms took random_work_delay_ms
                doCollectData = false;
                i_worker.finished_expect_get_result();
            } break;
            case i_worker.get_result (void) -> worked_ms_t worked_ms : {
                worked_ms = sim_work_ms;
            } break;
        }
    }
}

typedef struct log_t {
    unsigned    cnt;
    unsigned    log_started  [NUM_WORKERS];
    unsigned    log_finished [NUM_WORKERS];
    worked_ms_t log_worked_ms[NUM_WORKERS];
} log_t;

void print_log (log_t log) {
    debug_print ("\ncnt %u\n", log.cnt);
    debug_print ("%s", "log.log_started   ");
    for (unsigned ix=0; ix < NUM_WORKERS; ix++) {
        debug_print ("%2u ", log.log_started[ix]);
    }
    debug_print ("%s", ":\nlog.log_worked_ms ");
    for (unsigned ix=0; ix < NUM_WORKERS; ix++) {
        debug_print ("%2u ", log.log_worked_ms[ix]);
    }
    debug_print ("%s", "=\nlog.log_finished  ");
    for (unsigned ix=0; ix < NUM_WORKERS; ix++) {
        debug_print ("%2u ", log.log_finished[ix]);
    }
    debug_print ("%s", "#\n");
}

[[combinable]]
void client_task (client worker_if_t i_worker[NUM_WORKERS]) {
    timer     tmr;
    time32_t    time_ticks; // To 100 in 1 us
    bool        expect_notification_nums = 0;
    unsigned    random_seed = random_create_generator_from_seed(1); // xmos
    //unsigned    random_seed = random_create_generator_from_hw_seed(); // xmos
    unsigned    random_number;
    log_t       log;

    log.cnt = 0;

    debug_print ("%s", "client_task\n");
    tmr :> time_ticks;
    time_ticks += (1 * XS1_TIMER_HZ); // 1 second

    while (1) {
        select {
            case (expect_notification_nums == 0) => tmr when timerafter (time_ticks) :> void : {
                random_number = random_get_random_number (random_seed); // Just trying to start randomly

                // Start as [0,1,2,3], [3,0,1,2], [2,3,0,1], [1,2,3,0]:
                for (unsigned ix=0; ix < NUM_WORKERS; ix++) {
                    unsigned random_worker = random_number % NUM_WORKERS; // Inside [0..(NUM_WORKERS-1)]
                    i_worker[random_worker].async_start(); // Now log.log_started in random sequence
                    random_number++; // Next (but modulo NUM_WORKERS above)

                    log.log_started[ix] = random_worker;
                }
                expect_notification_nums = NUM_WORKERS;
                // === Do something else while all worker_task work ===
            } break;
            case (expect_notification_nums > 0) => i_worker[unsigned index_of_server].finished_expect_get_result() : {

                log.log_worked_ms[index_of_server] = i_worker[index_of_server].get_result();
                expect_notification_nums--;

                log.log_finished[expect_notification_nums] = index_of_server;
                if (expect_notification_nums == 0) {
                    log.cnt++;
                    print_log (log);
                    // === Process received log.log_worked_ms, or just.. ===
                    tmr :> time_ticks; // ..repeat now
                } else {}
            } break;
        }
    }
}

int main() {
    worker_if_t i_worker[NUM_WORKERS];
    par {
        [[combine]] // NUM_WORKERS(4) = [cores,timers,chanends]->[2,2,9], if no [[combine]] then ->[5,5,9]
        par (int ix = 0; ix < NUM_WORKERS; ix++) {
            worker_task (i_worker[ix], ix);
        }
        client_task (i_worker);
    }
    return 0;
}



#endif /* NOTES_H_ */
