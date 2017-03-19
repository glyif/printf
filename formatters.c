#include <stdarg.h>
#include "holberton.h"

/**
 * print_string - prints string
 * @ap: va_list
 */

int buffer_string(va_list ap, char *buffer, int index)
{
	int i;
	char *s;
	
	s = va_arg(ap, char *);

	for (i = 0; s[i] != '\0'; i++, index++)
		buffer[index] = s[i];

	return (index);
}

int buffer_char(va_list ap, char *buffer, int index)
{
	char s;
	s = va_arg(ap, int);

	buffer[index] = s;

	return (index + 1);
}
