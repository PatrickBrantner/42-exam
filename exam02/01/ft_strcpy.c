#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int     main(int argc, char **argv)
{
    (void)argc;
    char    *dest;
    char    *dest2;
    
    dest = malloc(sizeof(char) * (strlen(argv[1]) + 1));
    dest2 = malloc(sizeof(char) * (strlen(argv[1]) + 1));
    printf("%s\n", ft_strcpy(dest, argv[1]));
    printf("%s\n", strcpy(dest2, argv[1]));
    free(dest);
    free(dest2);
}