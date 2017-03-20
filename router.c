#include "holberton.h"
/**
 * router - struct
 * @va_list: list of args
 * @char: character string
 * @int :integer
 */

int (*router(char fmt))(va_list, char *, int)
{
	int i;
	routes router[] = {
		{'s', buffer_string},
		{'c', buffer_char},
		{'i', buffer_int},
		{'d', buffer_int},
		{'b', buffer_int_b},
		{'%', buffer_percent},
		{'\0', NULL}
	};

	i = 0;

	while (router[i].c != '\0')
	{
		if (router[i].c == fmt)
			return (router[i].f);
		i++;
	}

	return (0);
}
