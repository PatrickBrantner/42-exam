#include <stdlib.h>
#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int max;
    int i = 0;

    if (!tab)
        return 0;
    max = tab[i];
    while (i < len)
    {
        if (max < tab[i])
            max = tab[i];
        i++;
    }
    
    return max;
}


int	main()
{
    int     array[] = {10, 2 ,3 , 100 , 333};

    printf("Largest Element: %d\n", max(array, 5));
}