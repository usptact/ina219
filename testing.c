//Written by Ali Lown<ali@lown.me.uk>
//Available under 3-clause BSD

#include <util/delay.h>
#include "ina219.h"
#include "debug.h"

int main(void)
{
  uint16_t v = 0,i = 0, p = 0;

  init_219();

  for(;;)
  {
    _delay_ms(5000);
    v = read_voltage();
    i = read_current();
    p = read_power();
  }
}
