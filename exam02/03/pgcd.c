/*
Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

void    ft_pgcd(int a, int b)
{
    int del = a;

    if (a > b)
        del = b;
    while (del > 0)
    {
        if (a % del == 0 && b % del == 0)
            break ;
        del--;
    }
    printf("%d", del);
}

int     main(int argc, char **argv)
{
    int x;
    int y;    
    
    if (argc == 3)
    {

        x = atoi(argv[1]);
        y = atoi(argv[2]);
        ft_pgcd(x,y);
    }
    printf("\n");
}
