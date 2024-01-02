#include "main.h"
/**
 * _puts -  prints str followed by a new line
 * @str : pointer to string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
