#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 12. Software is eating the World
 * Return: 0
*/
int main(void)
{
	int digitA = 0, digitB;

	while (digitA <= 99)
	{
		digitB = digitA;
		while (digitB <= 99)
		{
			if (digitB != digitA)
			{
				putchar((digitA / 10) + 48);
				putchar((digitA % 10) + 48);
				putchar(' ');
				putchar((digitB / 10) + 48);
				putchar((digitB % 10) + 48);

				if (digitA != 98 ||  digitB != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digitB++;
		}
		digitA++;
	}
	putchar('\n');

	return (0);
}
