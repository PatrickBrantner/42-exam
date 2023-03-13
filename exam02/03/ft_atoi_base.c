#include <stdio.h>
#include <stdlib.h>

int     ft_putnbr(const char c, int str_base)
{
    int numb;
    int i = 0;
    char table1[] = "0123456789abcdef";
    char table2[] = "0123456789ABCDEF";

    while (i <= str_base)
    {
        if (c == table1[i] || c == table2[i])
            return i;
        i++;
    }   
    return (-1);
}


int	ft_atoi_base(const char *str, int str_base)
{
    int sign = 1;
    int i = 0;
    int numb = 0;

    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while(str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F')))
    {
        if (ft_putnbr(str[i], str_base) == -1)
            return 0;
        numb = (numb * str_base) + ft_putnbr(str[i], str_base);
        i++;
    }
    return (numb * sign);
}

int     main(int argc, char **argv)
{
    printf("%d\n", ft_atoi_base(argv[1], atoi(argv[2])));
}