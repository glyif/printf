char *apply_mod(char **s, va_list ap)
{
	int integer;
	char *tmp;
    int i;
    int len;
    int tmplen;

    integer = 0;

    if (s[1][0] != '\0')
    {
		integer = to_int(s[1]);
        tmplen = (sizeof(char) * integer + 1);
        tmp = malloc(tmplen);

        for (i = 0; i <= tmplen; i++)
        {
            tmp[i] = ' ';
        }

        tmp[tmplen] = '\0';

        len = strlen(ostr) + 1;

        for (i = 0; len >= 0; len--, tmplen--)
        {
            tmp[tmplen] = ostr[len];
        }

    }

        return (tmp);
}
