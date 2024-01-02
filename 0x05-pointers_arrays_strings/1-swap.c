#include "main.h"
/**
 * swap_int - Write a function that swaps the values of two integers.
 * @a: first value
 * @b: second value
 */
void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;
	*b = swp;
}
