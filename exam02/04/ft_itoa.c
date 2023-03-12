#include <stdlib.h>
#include <stdio.h>

int     get_len(int nbr)
{
    int i;
    int sign = 0;

    i = 0;
    if (nbr < 0)
        sign = 1;
    if (nbr == 0)
        return 1;
    while (nbr != 0)
    {
        nbr /= 10;
        i++;
    }
    return (i + sign);
}

char    *ft_itoa(int nbr)
{
    char *array;
    int length;

    length = get_len(nbr);
    array = malloc((length + 1) * sizeof(char));
    if (array == NULL)
        return NULL;
    array[length] = '\0';
    if (nbr == 0)
        array[0] = 0 + '0';
    if (nbr < 0)
    {
        array[0] = '-';
        nbr = -nbr;
    }
    length -= 1;
    while (nbr != 0)
    {
        array[length] = nbr % 10 + '0';
        nbr /= 10;
        length--;
    }
    return (array);    
}

int main()
{
    int x = -10378;
    
    char *ret = ft_itoa(x);
    printf("%s", ret);
    free(ret);
    ret = NULL;
}