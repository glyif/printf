#include "holberton.h"

/**
 * _strcpy - copy from one to another
 * @to: to
 * @from: from
 *
 */

int _strcpy(char *buffer, char *from, int index)
{
	int i;
	
	if (index >= 1024)
	{
		write(1, buffer, 1024);
		reset_buffer(buffer, 1024);
		index = 0;
	}

	i = 0;

	while(from[i] != '\0')
	{
		buffer[index] = from[i];
		i++;
		index++;
	}

	return (index);
}

