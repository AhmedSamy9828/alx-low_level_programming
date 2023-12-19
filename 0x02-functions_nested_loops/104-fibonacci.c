#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that reverses a string
 * Description: reverses a string
 * @str: the string to be reversed
 * Return: pointer to the reversed string
*/

char *rev_string(char *str)
{
	char *left = str;
	char *right = str + strlen(str) - 1;
	char temp;

	while (right > left)
	{
		temp = *right;
		*right = *left;
		*left = temp;
		right--;
		left++;
	}
	return (str);
}

/**
 * add - adds two strings and returns the result
 *
 * Description: adds two strings and returns the result
 *
 * @sum: result ptr
 * @n1: str 1
 * @n2: str 2
 *
 * Return: pointer to the string containing the result
*/

char *add(char *sum, const char *n1, const char *n2)
{
	const char *ptr1 = n1 + strlen(n1) - 1;
	const char *ptr2 = n2 + strlen(n2) - 1;
	char *ptr_sum = sum;
	int carry = 0;
	int digit_sum;

	while (ptr1 >= n1 || ptr2 >= n2 || carry)
	{
		digit_sum = carry;
		if (ptr1 >= n1)
			digit_sum += *(ptr1--) - '0';
		if (ptr2 >= n2)
			digit_sum += *(ptr2--) - '0';
		*ptr_sum++ = digit_sum % 10 + '0';
		carry = digit_sum / 10;
	}
	*ptr_sum = '\0';
	return (rev_string(sum));
}

/**
 * main - prints the first 98 Fibonacci numbers, starting with 0 and 1
 *
 * Return: 0 (success)
*/

int main(void)
{
	char fib[3][300]; /* Max 300 chars */
	int i;

	strcpy(fib[0], "0");
	strcpy(fib[1], "1");

	for (i = 2; i < 100; i++)
	{
		printf("%s", add(fib[2], fib[1], fib[0]));
		(i != 99) ? printf(", ") : printf("\n");
		strcpy(fib[0], fib[1]);
		strcpy(fib[1], fib[2]);
	}

	return (0);
}
