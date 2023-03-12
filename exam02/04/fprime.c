#include<stdlib.h>
#include<stdio.h>

int     ft_prime(int numb)
{
    int i = 2;
    if (numb == 1)
        return 0;
    if (numb == 2)
        return 1;
    while (i <= numb/2)
    {
        if (numb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int     main(int argc, char **argv)
{
    int switcher = 1;
    if (argc == 2)
    {
        int numb = atoi(argv[1]);
        int i = 2;
        if (numb == 1)
            printf("%d", numb);
        while (numb >= i)
        {
            if (numb % i == 0 && ft_prime(i) == 1)
            {
                if (switcher == 1)
                {
                    switcher = 0;
                    printf("%d", i);
                }
                else
                    printf("*%d", i);
                numb /= i;
            }
            else
                i++;
        }
    }
    printf("\n");
}