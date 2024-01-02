#include <unistd.h>

/**
 * _putchar - writes the character
 * @x: print x
 * Return: x
 */
int _putchar(char x)
{
	return (write(1, &x, 1));
}
