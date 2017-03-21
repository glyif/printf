#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: format of the number preceeding arguments to print
 *
 * Return: nothing
 */

int _printf(const char *format, ...)
{
	int i, j, templen;
	int index;
	char p;
	char *cpy;
	char *tmpfmt;
	int (*routing)(va_list, char *, int);
	
	char buffer[1024];
	p = '%';
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
		else if(format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				buffer[index] = p;
				index++;
				break;
			}
			else
			{
				tmpfmt = _parse((char *)(format), i + 1);
				templen = _strlen(tmpfmt) - 1;
				routing = router(tmpfmt[templen]);
				index = routing(ap, buffer, index);
			}
		}

		i++;
			
	}
	va_end(ap);

	write(1, buffer, index);
	return (index);
}
