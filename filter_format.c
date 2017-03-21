#include "holberton.h"

void filter_format(const char *format)
{
	char *tmpfmt;
	char **modifier;

	tmpfmt = _parse((char *)(format), i + 1);

	templen = _strlen(tmpfmt) - 1;

	modifier = mod_copy(tmpfmt, templen);

	printf("%s\n", modifier[0][0]);
}

