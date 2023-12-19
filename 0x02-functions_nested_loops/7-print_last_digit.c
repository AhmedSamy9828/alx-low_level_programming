#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: the int to extract the last digit from
* Return: value of the last digit
*/
int print_last_digit(int n)
{
int a;
if (n < 0)
a = -1 * (n % 10);
else
a = 1 * (n % 10);
_putchar(a + '0');
return (a);
}
