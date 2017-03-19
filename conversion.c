#include "holberton.h"

char *int_string(int n)
{
	int i;
	char *s;
	
	i = 0;
	
	s = malloc(intlen(n) * sizeof(int));
	
	if (n == 0)
	{
		s[i] = '0';
	}
	else if (n < 0)
	{
		n = _abs(n);
	}
		

	while (n != 0)
	{
		s[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	
	s[i] = '\0';
	
	_rev(s);
	return(s);
}
