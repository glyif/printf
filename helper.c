#include "holberton.h"

/**
 * _strcpy - copy from one to another
 * @buffer: to buffer
 * @from: from
 * @index: start index;
 *
 */

int _strcpy(char *buffer, char *from, int index)
{
	int i;
	
	i = 0;

	while(from[i] != '\0')
	{
		index = buffer_check(buffer, index);

		buffer[index] = from[i];
		i++;
		index++;
	}
	
	buffer[i] = '\0';
	return (index);
}

/**
 * _strlen - string length
 * @s: string
 *
 * Return: number of length in the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

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

/**
 * intlen - get the length of an integer
 * @n: integer to check
 *
 * Return: length of n
 */

int intlen(int n)
{
	int c;

	c = !n;

	while (n)
	{
		c++;
		n = n / 10;
	}

	return (c);
}

/**
 * negative_copy - if int is negative, puts a '-' char in front
 * @buffer - buffer to copy to
 * @index - index of the buffer to copy to
 *
 * Return: index of the buffer + 1;
 */

int negative_copy(char *buffer, int index)
{
	buffer[index] = '-';
	index++;

	return (index);
}

/**
 * _isalpha - checks if character is a letter
 * @c: the character
 *
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _isdigit - checks if argument is 0-9
 * @c: integer
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
