#include "main.h"
/**
* jack_bauer - prints every minute of the day of Jack Bauer
* starting from 00:00 to 23:59
*/
void jack_bauer(void)
{
int mint, hours;
for (hours = 0; hours <= 23; hours++)
{
for (mint = 0; mint <= 59; mint++)
{
_putchar((hours / 10) + 48);
_putchar((hours % 10) + 48);
_putchar(':');
_putchar((mint / 10) + 48);
_putchar((mint % 10) + 48);
_putchar('\n');
}
}
}
