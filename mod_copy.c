#include "holberton.h"
#include <stdio.h>

char **mod_copy(char *s, int len)
{
    char **mod;
    int j, c, i, p;
    int result;

    mod = malloc(sizeof(*mod) * 5);
	
	mod[5] = malloc(sizeof(char) * 1);
	mod[5][0] = s[len];

	i = c = j = p = 0;

	while (i < len)
	{
		if (check_flag(s[i]) == 1 && p == 0)
		{
			mod[0] = malloc(6);
			reset_buffer(mod[0], 6);

			for (j = i, c = 0; s[j] != '.' && s[j] != 'h' && s[j] != 'l' && s[j] != s[len] && s[j] != '\0'; j++, c++)
				mod[0][c] = s[j];
				
			j = 0;
			c = 0;

			i++;
		}

    	if (_isdigit(s[i]) == 1 && p == 0)
    	{
			mod[1] = malloc(10);
			reset_buffer(mod[1], 10);
		
			for (j = i, c = 0; s[j] != '.' && s[j] != 'h' && s[j] != 'l' && s[j] != s[len] && s[j] != '\0'; j++, c++)
            	mod[1][c] = s[j];

			j = 0;
			c = 0;
	
			i++;
    	}


	}

	printf("%s", mod[0]);
		
    return (mod);
}
