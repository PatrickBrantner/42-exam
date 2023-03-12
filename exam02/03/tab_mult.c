#include <unistd.h>

int     ft_atoi(char *str)
{
    int nbr = 0;
    int i = 0;
    
    while (str[i])
    {
        nbr = (nbr * 10) + (str[i] - '0');
        i++;
    }
    return (nbr);
}

void    ft_putnbr(int nbr)
{
    char c;
    if (nbr > 9)
        ft_putnbr(nbr/10);
    c = nbr % 10 + '0';
    write(1,&c,1);
}

int     main(int argc, char **argv)
{
    int i = 1;
    if (argc == 2)
    {
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(ft_atoi(argv[1]));
            write(1, " = ",3);
            ft_putnbr(ft_atoi(argv[1]) * i);
            write(1,"\n",1);
            i++;
        }
    }
    else
        write(1,"\n",1);
}