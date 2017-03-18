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

	va_start(ap, format);

	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;


		if (format[i] == '%')
		{
			while (p[j].c != NULL)
			{
				if (format[i + 1] == p[j].c[0])
				{
					p[j].f(ap);
				}

				j++;
			}
		}
		else
		{
			i++;
			_putchar(format[i]);
		}

		i++;
	}

	_putchar('\n');
	va_end(ap);

	return (0);
}
