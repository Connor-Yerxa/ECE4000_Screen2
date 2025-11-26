/*
 * MAX_Thermocouple_Commands.h
 *
 *  Created on: Nov 25, 2025
 *      Author: cbyer
 */
#include "main.h"
#include "max31856.h"

void init_MAX()
{
	max31856_t therm = {&hspi1, {THERM_CS_GPIO_Port, THERM_CS_Pin}};
	max31856_init(&therm);
	max31856_set_noise_filter(&therm, CR0_FILTER_OUT_50Hz);
	max31856_set_cold_junction_enable(&therm, CR0_CJ_ENABLED);
	max31856_set_thermocouple_type(&therm, CR1_TC_TYPE_K);
	max31856_set_average_samples(&therm, CR1_AVG_TC_SAMPLES_2);
	max31856_set_open_circuit_fault_detection(&therm, CR0_OC_DETECT_ENABLED_TC_LESS_2ms);
	max31856_set_conversion_mode(&therm, CR0_CONV_CONTINUOUS);
}

float read_therm_temp()
{
	max31856_t therm = {&hspi1, {THERM_CS_GPIO_Port, THERM_CS_Pin}};
	return max31856_read_TC_temp(&therm);
}

max31856_read_fault(&therm);
if (therm.sr.val) {
  /* Handle thermocouple error */
}

#ifndef INC_MAX_THERMOCOUPLE_COMMANDS_H_
#define INC_MAX_THERMOCOUPLE_COMMANDS_H_





#endif /* INC_MAX_THERMOCOUPLE_COMMANDS_H_ */
