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

#define REG_CONFIG      0x00
#define REG_SHUNT       0x01
#define REG_BUS         0x02
#define REG_POWER       0x03
#define REG_CURRENT     0x04
#define REG_CALIBRATION 0x05

void init_219(void);

uint16_t read_219_reg(uint8_t reg);
void write_219_reg(uint8_t reg, uint16_t val);
