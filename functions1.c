#include "main.h"

/**
 *print_binary - prints an unsigned number
 *@val - unsigned integer
 *Return: number of characters printed on screen
 */

int print_binary(unsigned int val)
{

	unsigned int count;
	int i = 0;
	int j;
	unsigned long int array[32];

	if (val == 0)
	{
		_putchar(48);
		return (1);
	}

	while (val > 0)
	{
		array[i] = (val % 2);
		val = (val / 2);
		i++;
	}

	j = (i - 1);

	while (j >= 0)
	{
		_putchar(array[j] + (48));
		count++;
		j--;
	}
	return (count);
}


int print_hex(unsigned int n, unsigned int count)
{
	unsigned int array[11];
	int a = 0;
	int size = 0;

	while (n)
	{
		array[a] = n % 16;
		n /= 16;
		a++;
	}
	a--;

	while (a >= 0)
	{
		if (array[a] > 9 && count == 0)
			_putchar((array[a] - 10) + 97);

		else if (array[a] > 9 && count == 1)
			_putchar((array[a] - 10) + 65);

		else
			_putchar(array[a] + '0');
		size++;
		a--;
	}
	return (size);
}
