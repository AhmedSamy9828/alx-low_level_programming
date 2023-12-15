#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 8. Hexadecimal
 * Return: 0
*/
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);
		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
