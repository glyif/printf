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

	return (index);
}

/**
 * buffer_check - checks if buffer is filled
 * @buffer - buffer to check
 * @index - current index of the buffer
 *
 * Return: index of the buffer
 */

int buffer_check(char *buffer, int index)
{
	if (index >= 1024)
	{
		write(1, buffer, 1024);
		reset_buffer(buffer, 1024);
		index = 0;
	}

	return (index);
}

