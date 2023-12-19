#include<stdio.h>
/**
 * main - entry point
 * Description: computes sum fib less than 4000000
 * Return: 0
*/

int main(void)
{
	unsigned long prev = 0, curr = 1, next, sum = 0;

	while (curr <= 4000000)
	{
		next = prev + curr;
		prev = curr;
		curr = next;
		if (curr % 2 == 0)
			sum += curr;
	}
	printf("%lu\n", sum);
	return (0);
}
