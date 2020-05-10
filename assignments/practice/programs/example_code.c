/** 
 * @file        simple_mode.c
 * @brief       This file contains functions for the simple mode
 *              of the shunya interfaces library.
 *  
 * @author      Yogesh Hegde
 * @bugs        No known bugs.
 *
 */

/*
 *#####################################################################
 *  Initialization block
 *  ---------------------
 *#####################################################################
 */

/* --- Standard Includes --- */
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <shunyaInterfaces.h>

/* --- Project Includes --- */
#include "sensor_ids.h"
#include "peripheral.h"
#include "simple_mode.h"

#include "pcf8591.h"

/**
 * @macro Defines Maximum number of sensors that can be connected
 */
#define SENSORS_MAX 10

/**
 * @brief Global Error Number 
 */
extern int32_t errNum;

/*
 *#####################################################################
 *  Process block
 *  ---------------------
 *#####################################################################
 */

/**
 * @brief      Find the sensors connected to the Boards
 *
 * @param      list[in]  list of sensors to find the id from
 *
 * @return     int16_t Sensor ID on Success and -1 on Failure
 */
static int16_t find_connected_sensors (uint8_t list[])
{
        /* Default value -1 to be returned if unable to find the sensor */ 
        uint8_t sensor = -1;
        for (uint8_t index = 0; index < SENSORS_MAX ; index++ ) {

                int32_t tmp;
                /* Check if the sensor ID exists in the YAML */
                tmp = check_sid_exist(list[index]);

                /* If exists then the sensor is connected */
                if (tmp > 0) {
                        /* If sensor connected then return the correct value 
                         * Else return -1 */
                        sensor = list[index];
                        break;
                }
        }

        return sensor;
}

/*
 *#####################################################################
 *  Generic Digital Sensor
 *  ------------------------
 *#####################################################################
 */
/**
 * @brief      Gets the status of any generic GPIO pin.
 *
 * @param[in]  phyPin  Physical pin
 *
 * @return     0 & 1 as digital values and -1 if error occurs.
 */
int8_t get_pin_status(uint8_t phyPin)
{
        /* Set the pin as INPUT*/
        pinMode(phyPin, INPUT);

        /* Read status from the Pin */
        return digitalRead(phyPin);
}

/*
 *#####################################################################
 *  Digital Sensor - ADC
 *  -----------------------------
 *#####################################################################
 */
/**
 * @brief Array to store the sensor names.
 */
static uint8_t adc[SENSORS_MAX] = {PCF8591};
/**
 * @brief      Gets the Analog to digital converted value.
 *
 * @return     int16_t digital value for analog reading on Success and
 *             -1 on Failure
 */
int16_t get_adc(uint8_t channel)
{
        /* Find Analog to digital converter connected to the Board */
        int16_t sensor = find_connected_sensors(adc);
        
        /* Variable to store the ADC value*/
        int16_t analog = 0;

        switch (sensor) {
                        
                case PCF8591:{ 
                        /* Get the pin from the Sensor ID */
                        uint8_t pin = get_pins_from_sids (sensor, GEN_SDA);

                        /* Convert the Pin to the I2C bus number */
                        uint8_t busNum = get_i2c_bus_from_pin (pin);
                        
                        /* Pass the I2C bus number and the channel 
                         * to the function to get the sensor value
                         */
                        analog = pcf8591_adc_read(busNum, channel);
                        
                        break;
                } /* PCF8591 sensor call */

                default:
                        /*Call error handler here */
                        analog = -1;
        }
        return analog;
}
