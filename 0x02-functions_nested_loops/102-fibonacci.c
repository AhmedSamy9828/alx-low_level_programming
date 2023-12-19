#include<stdio.h>
/**
 * main - entry point
 * Description: computes fib from 1 to 50
 * Return: 0
*/

int main(void)
{
	long n1 = 1, n2 = 2, res;
	int c = 2;

	printf("%ld, ", n1);
	printf("%ld, ", n2);
	while (c < 50)
	{
		res = n1 + n2;
		printf("%ld", res);
		n1 = n2;
		n2 = res;
		if (c != 50 - 1)
			printf(", ");
		c++;
	}
	printf("\n");
	return (0);
}
