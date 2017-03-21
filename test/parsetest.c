#include <stdio.h>
#include <string.h>
#include "../holberton.h"

int main(void)
{
	char *s;
	char *cpy;
	char *tmp;
	int end;
	int i;
	
	i = 0;
	s = "hello, my name is %10.5d";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '%')
		{
			cpy = _parse(s, i + 1);
			
		}
		
	}

	printf("%s", cpy);

	return (0);

}
