#include "main.h"
/**
* print_square - that prints a square, followed by a new line.
* @size: is the size of the square
* Use the character # to print the square
*/
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
