#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

void    ft_paramsum(int a, int b)
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
        ft_paramsum(x,y);
    }
    printf("\n");
}