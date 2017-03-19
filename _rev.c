#include "holberton.h"

/**
 * _rev - reverses string then prints
 * @s: string
 */

void _rev(char *s)
{
	char temp;
	int a;
	int b;

	a = _strlen(s) - 1;

	for (b = 0; b <= a / 2; b++)
	{
		temp = s[b];
		s[b] = s[a - b];
		s[a - b] = temp;
	}

}
