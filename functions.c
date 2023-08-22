#include "main.h"

/**
 * _print_int - print integer
 * @val: the integer value to be printed
 * Return: count if success?
 */

int _print_int(double val)
{
	unsigned int count = 0;
	int nwval;

	if (val < 0)
	{
		_putchar(45);

		val = -val;
		count += 1;
	}

	if (val / 10 > 1)
	{
		count = count + _print_int(val / 10);
	}

	nwval = (unsigned int)val;
	_putchar((nwval % 10) + 48);
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
		count = count + _print_int(val / 10);

	_putchar((val % 10) + 48);
	count++;
	return (count);
}



/**
 * print_float- prints a float
 * @val:the number
 */

void print_float(double val)
{
    if (val < 0)
    {
        _putchar('-');
        val = -val;
    }

    int intPart = (int)val;
    double fracPart = val - intPart;

    _print_int(intPart);  // Print the integer part

    if (fracPart != 0)
    {
        _putchar('.');  // Print the decimal point

        // Print up to 6 decimal places (adjust as needed)
        for (int i = 0; i < 6; i++)
        {
            fracPart *= 10;
            int digit = (int)fracPart;
            _putchar('0' + digit);
            fracPart -= digit;
        }
    }
}
