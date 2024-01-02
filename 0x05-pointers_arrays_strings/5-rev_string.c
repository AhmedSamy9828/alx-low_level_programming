#include "main.h"
/**
 * rev_string - function that reverses a string.
 * @s : pointer to string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, l;

	for (l = 0; s[l] != '\0'; l++)
	{

	}
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = tmp;
	}
}
