#include <stdio.h>

void	ft_swap(int *a, int *b)
{
    int     temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int     main()
{
    int a = 3;
    int b = 5;

    ft_swap(&a,&b);
    printf("%d\n",b);
}