#include <stdarg.h>
#include "holberton.h"

/**
 * print_string - prints string
 * @ap: va_list
 */

int buffer_string(va_list ap, char *buffer, int index)
{
	char *s;
	
	s = va_arg(ap, char *);

	index = _strcpy(buffer, s, index);

	return (index);
}

int buffer_char(va_list ap, char *buffer, int index)
{
	char s;
	s = va_arg(ap, int);

	buffer[index] = s;

	return (index + 1);
}

int buffer_int(va_list ap, char *buffer, int index)
{
	int i;
	char *s;
	
	int in;
	in = va_arg(ap, int);
	
	if (in < 0)
	{
		in = _abs(in);
		buffer[index] = '-';
		index++;
	}

	s = int_string(in);

	for (i = 0; s[i] != '\0'; i++, index++)
		buffer[index] = s[i];

	return (index);
}

int buffer_int_b(va_list ap, char *buffer, int index)
{
	int i;
	char *s;

	int in;
	in = va_arg(ap, int);

	if (in < 0)
	{
		in = _abs(in);
		buffer[index] = '-';
		index++;
	}

	s = int_b_string(in);

	for (i = 0; s[i] != '\0'; i++, index++)
		buffer[index] = s[i];

	return (index);
}
