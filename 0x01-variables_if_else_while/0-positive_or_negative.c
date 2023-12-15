#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 0. Positive anything is better than negative nothing
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
