#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <unistd.h>

/**
 * print_all - prints anything
 * @format: format of the number preceeding arguments to print
 *
 * Return: nothing
 */

int _printf(const char *format, ...)
{
	int i, j;
	int index;

	char buffer[1024];
	
	va_list ap;
	print p[] = {
		{"s", buffer_string},
		{"c", buffer_char},
		{NULL, NULL}
	};

	i = 0;

	va_start(ap, format);

	index = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%' && format[i - 1] != '%')
		{
			buffer[index] = format[i];
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			buffer[index] = '%';
		}
		else if (format[i] == '%')
		{
			i++;

			j = 0;

			while (p[j].c != NULL)
			{
				if (format[i] == p[j].c[0])
					index = p[j].f(ap, buffer, index);
				j++;
			}

			i--;

		}

		i++;
		index++;
			
	}

	va_end(ap);
	
	write(1, buffer, index);

	_putchar('\n');
	return (0);
}
