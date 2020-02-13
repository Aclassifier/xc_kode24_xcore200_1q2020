/*
 * random_conf.h
 *
 *  Created on: 12. feb. 2020
 *      Author: teig
 */


#ifndef RANDOM_CONF_H_
#define RANDOM_CONF_H_

// Only used with random_create_generator_from_hw_seed() which I don't
// think works like this on XCORE-200:
//
#define RANDOM_ENABLE_HW_SEED 1
#define __XS1_L__

#else
    #error Nested include RANDOM_CONF_H_
#endif
