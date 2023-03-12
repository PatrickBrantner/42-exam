#include<stdio.h>
#include<stdlib.h>

int     *ft_range(int start, int end)
{
    int *array;
    int i = 0;
    int len;

    if (start < end)
    {
        len = end - start + 1;
        array = malloc(sizeof(int) * (len));
        while (i <= len)
        {
            array[i] = start;
            i++;
            start++;
        }
        return (array);
    }
    else
    {
        len = start - end + 1;
        array = malloc(sizeof(int) * (len));
        while (i <= len)
        {
            array[i] = start;
            i++;
            start--;
        }
        return (array);
    }
}

int main()
{
    int *res;
    int i;
    int first = -3;
    int second = -1;
    int size;
    if (second > first)
        size = (second - first) + 1;   
    else
        size = (first - second) + 1;
    i = 0;
    res = ft_range(first, second);
    while (i < size)
    {
        printf("%i, ", res[i]);
        i++;
    }
}
     
    
