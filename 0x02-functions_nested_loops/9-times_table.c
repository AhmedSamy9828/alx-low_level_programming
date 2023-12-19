#include "main.h"
/**
* times_table - prints the 9 times table, starting with 0
*/
void times_table(void)
{
int num, mul, prod;
for (num = 0; num <= 9; num++)
{
_putchar(48);
for (mul = 1; mul <= 9; mul++)
{
_putchar(',');
_putchar(' ');
prod = num * mul;
if (prod <= 9)
_putchar(' ');
else
_putchar((prod / 10) + 48);
_putchar((prod % 10) + 48);
}
_putchar('\n');
}
}
