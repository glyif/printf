#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - prints anything
 * @format: format of the number preceeding arguments to print
 *
 * Return: nothing
 */

int _printf(const char *format, ...)
{
	int i;
	int index;
	int (*routing)(va_list, char *, int);

	char buffer[1024];
	va_list ap;

	i = 0;
	index = 0;

	va_start(ap, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] != '%' && format[i - 1] != '%')
		{
			buffer[index] = format[i];
			index++;
		}
		else if (format[i] == '%')
		{
			routing = router(format[i + 1]);
			index = routing(ap, buffer, index);
		}

		i++;

	}
	va_end(ap);

	write(1, buffer, index);
	return (index);
}
