/*
 * _notes.h
 *
 *  Created on: 13. feb. 2020
 *      Author: teig
 */


#ifndef NOTES_H_
#define NOTES_H_


==== NEWEST AT THE TOP ====


client_task
worker_task 0
worker_task 1
worker_task 2
worker_task 3

cnt 1
log.log_started    2  3  0  1
log.log_worked_ms 92 78 69 59
log.log_finished   0  1  2  3

cnt 2
log.log_started    1  2  3  0
log.log_worked_ms 18 25 77 58
log.log_finished   2  3  1  0

cnt 3
log.log_started    3  0  1  2
log.log_worked_ms 66 15 61 96
log.log_finished   3  0  2  1

cnt 4
log.log_started    2  3  0  1
log.log_worked_ms 56 86 16 30
log.log_finished   1  0  3  2

cnt 5
log.log_started    1  2  3  0
log.log_worked_ms  2 85 73 62
log.log_finished   1  2  3  0

cnt 6
log.log_started    0  1  2  3
log.log_worked_ms  9 92 83 50
log.log_finished   1  2  3  0

cnt 7
log.log_started    1  2  3  0
log.log_worked_ms 55 81 94 12
log.log_finished   2  1  0  3

cnt 8
log.log_started    0  1  2  3
log.log_worked_ms 53 60 30 55
log.log_finished   1  3  0  2

cnt 9
log.log_started    0  1  2  3
log.log_worked_ms 99 72 32  7
log.log_finished   0  1  2  3

cnt 10
log.log_started    3  0  1  2
log.log_worked_ms 97 63 61 23
log.log_finished   0  1  2  3

cnt 11
log.log_started    2  3  0  1
log.log_worked_ms 54 46 78 22
log.log_finished   2  0  1  3

cnt 12
log.log_started    1  2  3  0
log.log_worked_ms 32 85 54 67
log.log_finished   1  3  2  0

cnt 13
log.log_started    0  1  2  3
log.log_worked_ms 15 56 77 42
log.log_finished   2  1  3  0

cnt 14
log.log_started    2  3  0  1
log.log_worked_ms 17 18 38 81
log.log_finished   3  2  1  0

cnt 15
log.log_started    3  0  1  2
log.log_worked_ms 78 39 41 48
log.log_finished   0  3  2  1

cnt 16
log.log_started    1  2  3  0
log.log_worked_ms 39 57 71 77
log.log_finished   3  2  1  0

cnt 17
log.log_started    1  2  3  0
log.log_worked_ms 81 97 84 44
log.log_finished   1  2  0  3

cnt 18
log.log_started    2  3  0  1
log.log_worked_ms 56 58 97 67
log.log_finished   2  3  1  0

cnt 19
log.log_started    3  0  1  2
log.log_worked_ms 74 31 88  9
log.log_finished   2  0  1  3

cnt 20
log.log_started    0  1  2  3
log.log_worked_ms 55 64 93 78
log.log_finished   2  3  1  0

cnt 21
log.log_started    3  0  1  2
log.log_worked_ms 98 51 56 49
log.log_finished   0  2  1  3

cnt 22
log.log_started    1  2  3  0
log.log_worked_ms 92 73 74 19
log.log_finished   0  2  1  3

cnt 23
log.log_started    2  3  0  1
log.log_worked_ms  8 14 77 55
log.log_finished   2  3  1  0

cnt 24
log.log_started    0  1  2  3
log.log_worked_ms 41 72 47 34
log.log_finished   1  2  0  3

cnt 25
log.log_started    1  2  3  0
log.log_worked_ms 32 53 42 19
log.log_finished   1  2  0  3

cnt 26
log.log_started    0  1  2  3
log.log_worked_ms 12 64 29 97
log.log_finished   3  1  2  0

cnt 27
log.log_started    3  0  1  2
log.log_worked_ms 40 31 10 77
log.log_finished   3  0  1  2

cnt 28
log.log_started    2  3  0  1
log.log_worked_ms 34 14 66 26
log.log_finished   2  0  3  1

cnt 29
log.log_started    2  3  0  1
log.log_worked_ms 75 42 44 97
log.log_finished   3  0  2  1

cnt 30
log.log_started    2  3  0  1
log.log_worked_ms 99 86 65 28
log.log_finished   0  1  2  3

cnt 31
log.log_started    3  0  1  2
log.log_worked_ms 16 79 74 29
log.log_finished   1  2  3  0

cnt 32
log.log_started    2  3  0  1
log.log_worked_ms 82 78 82 54
log.log_finished   0  2  1  3

cnt 33
log.log_started    1  2  3  0
log.log_worked_ms 15  9  7 25
log.log_finished   3  0  1  2

cnt 34
log.log_started    3  0  1  2
log.log_worked_ms  6 51 44 13
log.log_finished   1  2  3  0

cnt 35
log.log_started    2  3  0  1
log.log_worked_ms 47  6 85 64
log.log_finished   2  3  0  1

cnt 36
log.log_started    2  3  0  1
log.log_worked_ms  4 74 44 54
log.log_finished   1  3  2  0

cnt 37
log.log_started    3  0  1  2
log.log_worked_ms 54 79 61 44
log.log_finished   1  2  0  3

cnt 38
log.log_started    0  1  2  3
log.log_worked_ms  4  4 16 80
log.log_finished   3  2  1  0

cnt 39
log.log_started    3  0  1  2
log.log_worked_ms 35 83 90 58
log.log_finished   2  1  3  0



/*
 * main.xc
 *
 *  Created on: 12. feb. 2020
 *      Author: teig
 *      Ver 0.50 2020.02.13 Starts workers in 4 sequences and workers simulate random work
 *      Ver 0.60 2020.02.13 inP_button button added
 */

#include <platform.h> // core
#include <stdio.h>
#include <timer.h> // delay_milliseconds(200), XS1_TIMER_HZ etc
#include "random.h" // xmos. Also uses "random_conf.h"
#include <iso646.h>

#define DEBUG_PRINT_TEST 1
#define debug_print(fmt, ...) do { if(DEBUG_PRINT_TEST) printf(fmt, __VA_ARGS__); } while (0)

// BOOLEAN #include <stdbool.h> if C99
// See http://www.teigfam.net/oyvind/home/technology/165-xc-code-examples/#bool
typedef enum {false,true} bool; // 0,1 This typedef matches any integer-type type like long, int, unsigned, char, bool

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
                tmr :> time_ticks; // Immediately
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
    bool        button_pressed;
} log_t;

void print_log (log_t log) {
    debug_print ("\ncnt %u %s\n", log.cnt, log.button_pressed ? "BUTTON" : "");
    debug_print ("%s", "log.log_started   ");
    for (unsigned ix=0; ix < NUM_WORKERS; ix++) {
        debug_print ("%2u ", log.log_started[ix]);
    }
    debug_print ("%s", "\nlog.log_worked_ms ");
    for (unsigned ix=0; ix < NUM_WORKERS; ix++) {
        debug_print ("%2u ", log.log_worked_ms[ix]);
    }
    debug_print ("%s", "\nlog.log_finished  ");
    for (unsigned ix=0; ix < NUM_WORKERS; ix++) {
        debug_print ("%2u ", log.log_finished[ix]);
    }
    debug_print ("%s", "\n");
}

#define BUTTON_PRESSED  0
#define BUTTON_RELEASED 1
in port inP_button = on tile[0]: XS1_PORT_1M; // J1 P63


[[combinable]]
void client_task (client worker_if_t i_worker[NUM_WORKERS]) {
    timer    tmr;
    time32_t time_ticks; // To 100 in 1 us
    bool     expect_notification_nums = 0;
    unsigned random_seed = random_create_generator_from_seed(1); // xmos
    unsigned random_number;
    log_t    log;
    bool     allow_button = false;
    bool     button_current_val = BUTTON_RELEASED;

    log.cnt = 0;
    log.button_pressed = false;

    debug_print ("%s", "client_task\n");

    tmr :> time_ticks;
    time_ticks += (1 * XS1_TIMER_HZ); // 1 second before first timerafter

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
                    allow_button = (log.cnt >= 10);
                } else {}
            } break;
            case allow_button => inP_button when pinsneq(button_current_val) :> button_current_val: {
                // I/O pin changed value
                // Debouncing not done (best done in separate task, with its own timerafter)
                log.button_pressed = (button_current_val == BUTTON_PRESSED);
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
