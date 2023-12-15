#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 9. Patience.
 * Return: 0
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
