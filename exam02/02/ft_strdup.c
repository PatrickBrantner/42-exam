/*
Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int     ft_strlen(char *src)
{
    int i = 0;
    while (src[i] != '\0')
        i++;
    return i;
}

char    *ft_strdup(char *src)
{
    int x = ft_strlen(src);
    char *ret;
    int i = 0;

    ret = malloc(sizeof(char) * (x + 1));
    if (!ret)
        return NULL;
    while (src[i] != '\0')
    {
        ret[i] = src[i];
        i++;
    }
    ret[i] = '\0';
    return ret;
}

int     main(int argc, char **argv)
{
    (void)argc;
    printf("%s\n", ft_strdup(argv[1]));
    printf("%s\n", strdup(argv[1]));
}
