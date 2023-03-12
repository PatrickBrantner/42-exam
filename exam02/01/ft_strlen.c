#include <stdio.h>
#include <string.h>

int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int     main(int argc, char **argv)
{
    (void)argc;
    
    printf("%i\n", ft_strlen(argv[1]));
    printf("%lu\n", strlen(argv[1]));
}