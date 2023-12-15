#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 10. Inventing is a combination of brains and materials.
 * Return: 0
*/
int main(void)
{
	int digitA = 0, digitB;

	while (digitA <= 9)
	{
		digitB = 0;
		while (digitB <= 9)
		{
			if (digitA != digitB && digitA < digitB)
			{
				putchar(digitA + 48);
				putchar(digitB + 48);

				if (digitA + digitB != 17)
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
