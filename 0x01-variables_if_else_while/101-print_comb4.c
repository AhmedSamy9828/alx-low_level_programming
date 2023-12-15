#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 11. The success combination in business is:
 * Return: 0
*/
int main(void)
{
	int digitA = 0;

	int digitB, digitC;

	while (digitA <= 9)
	{
		digitB = 0;
		while (digitB <= 9)
		{
			digitC = 0;

			while (digitC <= 9)
			{
				if (digitA != digitB && digitA < digitB
						&& digitB != digitC && digitB < digitC)
				{
					putchar(digitA + 48);
					putchar(digitB + 48);
					putchar(digitC + 48);

					if (digitA + digitB + digitC != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				digitC++;
			}
			digitB++;
		}
		digitA++;
	}
	putchar('\n');

	return (0);
}
