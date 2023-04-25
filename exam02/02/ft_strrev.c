#include <stdio.h>

int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char    *ft_strrev(char *str)
{
    char temp;
    int i = 0;
    int j = ft_strlen(str) - 1;
    
    while (i < j)    //--> while (str && i < j)?????
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp; 
        i++;
        j--;
    }
    return (str);
}

int     main(int argc, char **argv)
{
    (void)argc;

    printf("%s\n", ft_strrev(argv[1]));
}
