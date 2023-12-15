#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 7. Smile in the mirror
 * Return: 0
*/
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
