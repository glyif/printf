#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_all - prints anything
 * @format: format of the number preceeding arguments to print
 *
 * Return: nothing
 */

int _printf(const char *format, ...)
{
	int i, j;

	va_list ap;
	print p[] = {
		{"s", print_string},
		{"c", print_char},
		{NULL, NULL}
	};

	i = 0;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%' && format[i - 1] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			i++;

			j = 0;

			while (p[j].c != NULL)
			{
				if (format[i] == p[j].c[0])
					p[j].f(ap);
				j++;
			}

			i--;

		}

		i++;
			
	}

	_putchar('\n');
	va_end(ap);

	return (0);
}
