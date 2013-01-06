//Written by Ali Lown<ali@lown.me.uk>
//Available under 3-clause BSD
#include "i2c.h"

//TODO: change this to match hardware
#define ADDR 0x40

void init_219(void)
{
  init_i2c_master();
  /* Start oscillator */
  i2c_start();
  i2c_tx(ADDR | I2C_WRITE);
  i2c_tx(0x00);
  i2c_tx(1<<7);
  i2c_stop();
}

uint16_t read_voltage(void)
{
}

uint16_t read_current(void)
{
}

uint16_t read_power(void)
{
}
