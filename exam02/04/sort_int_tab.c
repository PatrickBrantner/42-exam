#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int temp;
    while (i <= size)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }

}

int main()
{
    int tab[] = {1, 3, 5, 10, 100, -1, 5};
    unsigned int size = 7;
    unsigned int i = 0;
    
    while (i < size)
    {
        printf("%i\n", tab[i]);
        i++;
    }

    sort_int_tab(tab, size);
    printf("\n");
    i = 0;
    while (i < size)
    {
        printf("%i\n", tab[i]);
        i++;
    }
}