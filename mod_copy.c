#include "holberton.h"
#include <stdio.h>

char **mod_copy(char *s, int len)
{
    char **mod;
    int j, c, i, p, f;
    int result;

    mod = malloc(sizeof(*mod) * 6);

        mod[5] = malloc(sizeof(char) * 1);
        mod[5][0] = s[len];

        i = c = f = p = 0;

        while (i < len)
        {

                if (check_flag(s[i]) == 1 && p == 0)
                {
                        mod[0] = malloc(6);
                        reset_buffer(mod[0], 6);

                        mod[0][c] = s[i];
                        c++;
                        i++;
                }

        if (_isdigit(s[i]) == 1 && p == 0)
        {
                        mod[1] = malloc(10);
                        reset_buffer(mod[1], 10);

            mod[1][f] = s[i];
                        printf("%c", mod[1][f]);
                        f++;
                        i++;
        }

                i++;
        }

        printf("%s", mod[0]);

    return (mod);
}
