/**
 * @file tlc59116.h
 * @brief Led driver TLC59116 functionality
 *
 * Basic functions for communicating with led driver TLC59116.
 *
 * \copyright Copyright 2013 /Dev. All rights reserved.
 * \license This project is released under MIT license.
 *
 * @author Ferdi van der Werf <efcm@slashdev.nl>
 * @since 0.12.0
 */

#ifndef EXT_TLC59116_H
#define EXT_TLC59116_H

#include "../config.h"

// Do we want TLC59116
#ifdef EXT_TLC59116

#include <inttypes.h>
#include <util/delay.h>
#include "../com/i2c.h"

/**
 * @brief Turn led off with led_mode
 */
#define TLC59116_LED_OFF 0
/**
 * @brief Turn led on with led_mode
 */
#define TLC59116_LED_ON 1
/**
 * @brief Individual brightness registers control led brightness
 */
#define TLC59116_LED_PWM 2
/**
 * @brief Individual brightness registers and group dimming registers control
 * led brightness
 */
#define TLC59116_LED_PWM_GROUP 3

/**
 * @brief Soft reset all connected chips
 */
void tlc59116_reset(void);

/**
 * @brief Wake crystal on chip with address
 * @note After sending i2c command it waits 500us for chip (see documentation
 * page 13, table 3, footnote 3).
 * @note Assumes I2C works without error
 * @param address Address of chip to wake up
 * @param sleep 0 to wake up, >0 to sleep
 */
void tlc59116_sleep(uint8_t address, uint8_t sleep);

/**
 * @brief Turn a led on or off
 * @note Assumes I2C works without error
 * @param address Address of chip
 * @param led_nr Led output number (0 - 15)
 * @param mode 0 for off, 1 for on, 2 for pwm, 3 for pwm and group dimming
 */
void tlc59116_set_led_mode(uint8_t address, uint8_t led_nr, uint8_t mode);

#endif // EXT_TLC59116
#endif // EXT_TLC59116_H
