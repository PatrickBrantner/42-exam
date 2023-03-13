#include <stdio.h>
#include <stdlib.h>

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        int numb = atoi(argv[1]);
        int i = 2;
        if (numb == 1)
            printf("1");
        while (numb > 1)
        {
            if (numb % i == 0)
            {
                printf("%d", i);
                numb /= i;
                if (numb > 1)
                    printf("*");
            }
            else
                i++;    
        }
    }
    printf("\n");
}