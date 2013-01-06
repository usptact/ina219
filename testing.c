//Written by Ali Lown<ali@lown.me.uk>
//Available under 3-clause BSD

#include <util/delay.h>
#include "ina219.h"
#include "debug.h"

int main(void)
{
  uint16_t vb = 0, vs = 0, i = 0, p = 0;

  init_219();

  for(;;)
  {
    _delay_ms(5000);
    vs = read_219_reg(REG_SHUNT);
    vb = read_219_reg(REG_BUS);
    i = read_219_reg(REG_CURRENT;)
    p = read_219_reg(REG_POWER);
    //NB: if this looks strange, try the other one, since I may
    //    have got the lengths wrong...
    printf("Vs:%hu Vb:%hu I:%hu P:%hu", vs, vb, i, p);
    //printf("Vs:%d Vb:%d I:%d P:%d", vs, vb, i, p);
  }
}
