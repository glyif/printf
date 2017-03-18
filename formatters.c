#include <stdarg.h>
#include "holberton.h"

/**
 * print_string - prints string
 * @ap: va_list
 */

void print_string(va_list ap)
{
	int i;
	char *s;
	
	s = va_arg(ap, char *);

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	_putchar('\0');
}

void print_char(va_list ap)
{
	char s;
	s = va_arg(ap, int);

	_putchar(s);
}
