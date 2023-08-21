#include "main.h"

/**
 * _print_int - print integer
 * @val: the integer value to be printed
 * Return: count if success?
 */

int _print_int(double val)
{
	unsigned int count = 0;

	if (val < 0)
	{
		_putchar("-");

		val == -1;
		count += 1;
	}

	if (val / 10 > 1)
	{
		count = count + _print_int(val / 10);
	}

	_putchar((val % 10) + "0");
	count += 1;

	return (count);
}


/**
 * print_unsignedint- print unsigned integer
 * @val: integer to be printed
 * Return:  count of printed chars
 */

int print_unsignedint(unsigned int val)
{
	int count = 0;

	if (val / 10 != 0)
		count = count + print_int(val / 10);

	_putchar((val % 10) + '0');
	count++;
	return (count);
}



/**
 * print_float- prints a float
 * @val:the number
 */

void print_float(double val)
{
	int dec = 1000000;
	int i = (int)val;

	print_int(i);
	val = (val - i) * dec;
	i = (int)val;
	_putchar('.');
	print_int(i);
}
