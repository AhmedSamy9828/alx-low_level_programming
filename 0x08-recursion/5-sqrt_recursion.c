#include "main.h"

int actual_sqrt(int x, int y);

/**
 *  _sqrt_recursion- natural square root of number
 *  @n: integer
 *  Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt(n, 0));
}

/**
 * actual_sqrt- recurses to find the natural
 * square root of a number
 * @x: number to calculate the sqaure root of
 * @y: iterator
 *
 * Return: the resulting square root
 */

int actual_sqrt(int y, int x)
{
	if (x * x > y)
	{
		return (-1);
	}
	if (x * x == y)
	{
		return (x);
	}
	return (actual_sqrt(y, x + 1));
}
