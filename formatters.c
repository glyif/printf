#include <stdarg.h>
#include "holberton.h"

/**
 * buffer_string - prints string
 * @ap: va_list
 * @buffer: character string
 * @index: position in string
 * Return: integer
 */
int buffer_string(va_list ap, char *buffer, int index)
{
	char *s;

	s = va_arg(ap, char *);

	index = _strcpy(buffer, s, index);

	return (index);
}

/**
 * buffer_char - prints char
 * @ap: va_list
 * @buffer: character string
 * @index: position in string
 * Return: integer
 */
int buffer_char(va_list ap, char *buffer, int index)
{
	char s;

	s = va_arg(ap, int);

	buffer[index] = s;

	return (index + 1);
}

/**
 * buffer_int - prints integer
 * @ap: va_list
 * @buffer: character string
 * @index: position in string
 * Return: integer
 */
int buffer_int(va_list ap, char *buffer, int index)
{
	char *s;
	int in;

	in = va_arg(ap, int);

	if (in < 0)
	{
		index = buffer_check(buffer, index);
		index = negative_copy(buffer, index);
		in = _abs(in);
	}

	s = int_string(in);

	index = _strcpy(buffer, s, index);
	return (index);
}

/**
 * buffer_int_b - prints binary integer
 * @ap: va_list
 * @buffer: character string
 * @index: position in string
 * Return: integer
 */
int buffer_int_b(va_list ap, char *buffer, int index)
{
	char *s;
	int in;

	in = va_arg(ap, int);

	if (in < 0)
	{
		index = buffer_check(buffer, index);

		in = _abs(in);
		buffer[index] = '-';
		index++;
	}

	s = int_b_string(in);

	index = _strcpy(buffer, s, index);

	return (index);
}
