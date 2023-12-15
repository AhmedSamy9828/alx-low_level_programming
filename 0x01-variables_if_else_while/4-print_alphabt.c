#include <stdio.h>
/**
 * main -  0x01. C - Variables, if, else, while
 * Description : 4. When I was having that alphabet soup.
 * Return: 0
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
