#include "main.h"

/**
 *print_binary - prints an unsigned number
 *@val - 
 *
 *Return: number of characters printed on screen
 */

int print_binary(unsigned int val)
{

	int count;
	int i = 0;
	int j;
	long int array[32];

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
		_putchar(array[j]);
		count++;
		j--;
	}
	return (count);
}
