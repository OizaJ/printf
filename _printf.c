#include <stdarg.h>
#include "main.h"
#include <stdio.h>

/**
 * _printf - converts input to standard output
 * @format: string with content to be printed
 * Return: 0 - success, return -1 otherwise
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, j = 0, count = 0;
	char *str;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i += 1;
			switch (format[i])
			{
			case 'c':
				_putchar(va_arg(args, int));
				count += 1;
				break;

			case 's':
				str = va_arg(args, char*);
				if (str != 0)
				{
					for (j = 0; str[j] != '\0'; j++)
					{
						_putchar(str[j]);
						count += 1;
					}
				}
				else
					count = count + _printf("(null)");
				break;

			case '%':
				_putchar('%');
				count += 1;
				break;

			case '\0':
				return (-1);

			case 'i': case 'd':
				count += _print_int(va_arg(args, int));
				break;
			case 'b':
				count += print_binary(va_arg(args, unsigned int)
					);
				break;
			case 'o':
				count = count + print_octal(va_arg(args, unsigned int)
					);
				break;

			case 'X':
				count = count + print_hex(va_arg(args, unsigned int),
						    1);
				break;

			case 'x':
				count = count + print_hex(va_arg(args, unsigned int),
						    0);
				break;

			case 'R':
				count = count + print_rot13(va_arg(args, char*
								    ));
				break;

			case 'r':
				count = count + print_rev(va_arg(args, char*));
				break;

			default:
				_putchar('%');
				_putchar(format[i]);
				count += 2;
				break;
			}
		}
		else
		{
			_putchar(format[i]);
			count += 1;
		}
		i++;
	}
	va_end(args);
	return (count);
}
