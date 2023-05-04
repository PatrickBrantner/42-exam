/*
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
*/

#include<unistd.h>

void    ft_putnbr(int numb)
{
    char c;

    if (numb > 9)
        ft_putnbr(numb/10);
    c = (numb % 10) + '0';
    write(1,&c,1);

}

int     main(int argc, char **argv)
{
    int x = argc - 1;

    ft_putnbr(x);
    write(1,"\n",1);
}
