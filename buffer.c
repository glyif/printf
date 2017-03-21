#include "holberton.h"

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

void reset_buffer(char *buffer, int size)
{
	int i;

	for (i = 0; i < size; i++)
		buffer[i] = '\0';
}
