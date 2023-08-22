#include "main.h"
#include <stdio.h>


/**
 * print_octal - octal conversion and printing of integer
 * @n: unsigned int
 * Return: length of printed chars
 */c

int print_octal(unsigned int n)
{
	int a = 0;
	unsigned int array[11];
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		array[a] = n % 8;
		n = n / 8;
		a++;
	}

	a--;

	while (a >= 0)
	{
		_putchar(array[a] + '0');
		count++;
		a--;
	}

	return (count);
}


/**
 * print_rot13 - prints a rot13'ed string
 * @str: pointer to string
 * Return: count of printed chars
 */

int print_rot13(char *str)
{
	int len = 0, a;

	if (str == NULL)
		return (-1);

	for (; *(str + len) != '\0'; len++)
		;

	for (a = 0; a < len; a++)
	{
		if ((str[a] >= 97 && str[a] <= 109) ||
		    (str[a] >= 65 && str[a] <= 77))
			_putchar(*(str + a) + 13);

		else if ((str[a] >= 110 && str[a] <= 122) ||
			 (str[a] >= 78 && str[a] <= 90))
			_putchar(*(str + a) - 13);

		else
			_putchar(str[a]);
	}

	return (len);
}

/**
 * prt_rev - print a string from reverse
 * @str: pointer to string
 * Return: count of printed characters
 */

int print_rev(char *str)
{
	int len;
	int count = 0;

	if (str == NULL)
		return (-1);

	for (len = 0; *(str + len) != '\0'; len++)
		;

	for (len = len - 1; len >= 0; --len)
	{
		_putchar(*(str + len));
		count++;
	}

	return (count);
}
