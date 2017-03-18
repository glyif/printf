/**
 * _strcpy - copy from one to another
 * @to: to
 * @from: from
 *
 */

void _strcpy(char *to, char *from)
{
	int i;
	
	i = 0;
	while(from[i] != '\0')
		to[i] = from[i];
}

