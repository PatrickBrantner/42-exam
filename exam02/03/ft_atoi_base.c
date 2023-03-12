#include <stdio.h>
#include <unistd.h>

int     ft_convert(char c, int base)
{
    int i = 0;
    char table1[] = "0123456789abcdef";
    char table2[] = "0123456789ABCDEF";


    while( i <= base)
    {
        if (c == table1[i] || c == table2[i])
            return i;
        i++;   
    }
    return (-1);
}

int	    ft_atoi_base(const char *str, int str_base)
{
    int nbr = 0;
    int i = 0;
    int sign = 1;
    
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[0] == '-')
            sign *= -1;
        i++;
    }
    while (str[i])
    {
        if (ft_convert(str[i], str_base) == -1)
            return(0);
        nbr = (nbr * str_base) + ft_convert(str[i], str_base);
        i++;
    }
    return (sign * nbr);
}

int     main()
{
    printf("%d\n", ft_atoi_base("+111", 1));

}
