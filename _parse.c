#include "holberton.h"
#include <stdio.h>

char *_parse(char *s, int start)
{
	int j, i;
	int alpha;
	char *cpy;
	int totallen;

	alpha = 0;
	j = start;
	while (alpha != 1)
	{
		alpha = _isalpha(s[j]);
		j++;
	}
	
	totallen = j - start + 1;
	cpy = malloc(sizeof(char) * totallen);

	for (i = 0; totallen > 0; start++, totallen--, i++)
		cpy[i] = s[start];

	i = i - 1;

	cpy[i] = '\0';
	return (cpy);
}


	
