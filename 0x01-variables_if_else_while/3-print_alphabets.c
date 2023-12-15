#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 3. alphABET
 * Return: 0
*/
int main(void)
{
	char CH = 'A';
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
