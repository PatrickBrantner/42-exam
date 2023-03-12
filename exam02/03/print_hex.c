#include<unistd.h>
#include<stdio.h>

unsigned int    ft_atoi(char *str)
{
    unsigned int nbr = 0;
    unsigned int i = 0;

    while (str[i])
    {
        nbr = nbr*10 + (str[i] -'0');
        i++;
    }
    return (nbr);
}

void    ft_putnbr(unsigned int nbr)
{
    char str[] = "0123456789abcdef";

    if (nbr > 15)
        ft_putnbr(nbr/16);
    write(1,&str[nbr%16],1);
}

int     main(int argc, char **argv)
{
    int x;
    
    if (argc == 2)
    {
        x = ft_atoi(argv[1]);
        ft_putnbr(x);
    }
    write(1,"\n",1);
}