/*
 * =====================================================================================
 *
 *       Filename:  ina219.h
 *
 *    Description:
 *
 *         Author:  Ali Lown, ali@lown.me.uk
 *
 * =====================================================================================
 */

void init_219(void);

uint16_t read_voltage(void);
uint16_t read_current(void);
uint16_t read_power(void);
