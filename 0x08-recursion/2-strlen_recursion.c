#include "main.h"
/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: string.
 *
 * Return: The length.
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
