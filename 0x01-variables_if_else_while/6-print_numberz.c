#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 6. Numberz
 * Return: 0
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
