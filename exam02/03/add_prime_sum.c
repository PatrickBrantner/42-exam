/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>
#include <stdio.h>

unsigned int    ft_atoi(char *str)
{
    unsigned int nbr = 0;
    unsigned int i = 0;

    while (str[i] != '\0')
    {
        nbr *= 10;
        nbr =  nbr + (str[i] - '0');
        i++;
    }
    return (nbr);
}

int     ft_prime(unsigned int nbr)
{
    int check = 2;
    if (nbr == 2)
        return 1;
    while (check <= nbr/2)
    {
        if (nbr % check == 0)
            return (0);
        check++;
    }
    return (1);
}

void    ft_putnbr(unsigned int nbr)
{
    unsigned char    c;
    
    if (nbr > 9)
        ft_putnbr(nbr/10);
    c = (nbr % 10) + '0';
    write(1,&c,1);
}

int     main(int argc, char **argv)
{

    if (argc == 2)
    {
        unsigned int nbr = ft_atoi(argv[1]);
        unsigned int i = 2;
        unsigned int sum = 0;
        while (i <= nbr)
        {
            if (ft_prime(i) == 1)
                sum += i;
            i++;
        }
        ft_putnbr(sum);
    }    
    write(1,"\n",1);    
}
