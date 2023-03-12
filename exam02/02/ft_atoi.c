#include <stdio.h>
#include <stdlib.h>

int     ft_atoi(const char *str)
{
    int i = 0;
    int nb = 0;
    int sign = 1;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {   
        nb = (nb * 10) + str[i] - '0';
        i++;
    }
    return (sign * nb);
}

int     main()
{
    printf("%d\n", ft_atoi("f"));
    printf("%d\n", atoi("f"));
}
