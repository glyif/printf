#ifndef BASE_STRUCT_H
#define BASE_STRUCT_H

/**
 * struct routes - base structure for _printf
 * @s: string for matching formaters
 * @f: function pointer to the corresponding function of the formatter
 * @c: character
 */

typedef struct routes
{
	char c;
	int (*f)(va_list, char *, int);
} routes;
#endif
