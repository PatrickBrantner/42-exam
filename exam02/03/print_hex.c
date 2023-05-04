/*
Assignment name  : print_hex
Expected files   : print_hex.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a positive (or zero) number expressed in base 10,
and displays it in base 16 (lowercase letters) followed by a newline.

If the number of parameters is not 1, the program displays a newline.

Examples:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/

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
