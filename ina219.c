//Written by Ali Lown<ali@lown.me.uk>
//Available under 3-clause BSD
#include "i2c.h"

//TODO: change this to match hardware
#define ADDR 0x40

void init_219(void)
{
  init_i2c_master();

  //Setup config registers. Use the software to update the MAGIC numbers
  write_219_reg(REG_CONFIG, 0x399f);
  write_219_reg(REG_CALIBRATION, 0x0000);
}

uint16_t read_219_reg(uint8_t reg)
{
  uint8_t low, uint8_t high;

  i2c_start();
  //This may need MSB high. I am unsure from the DS.
  i2c_tx(ADDR | I2C_WRITE);
  i2c_tx(reg);
  i2c_start();
  i2c_tx(ADDR | I2C_READ);
  high = i2c_rx_ack();
  low = i2c_rx_nack();
  i2c_stop();

  return (uint16_t)((high << 8) | low);
}

void write_219_reg(uint8_t reg, uint16_t val)
{
  i2c_start();
  //This may need MSB high. I am unsure from the DS.
  i2c_tx(ADDR | I2C_WRITE);
  i2c_tx(reg);
  i2c_tx((uint8_t)(val >> 8));
  i2c_tx((uint8_t)(val & 0xFF));
  i2c_stop();
}
