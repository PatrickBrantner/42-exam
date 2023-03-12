#include<stdio.h>
#include<stdlib.h>

int     *ft_rrange(int start, int end)
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
            array[i] = end;
            i++;
            end--;
        }
        return (array);
    }
    else
    {
        len = start - end + 1;
        array = malloc(sizeof(int) * (len));
        while (i <= len)
        {
            array[i] = end;
            i++;
            end++;
        }
        return (array);
    }
}

int main()
{
    int *res;
    int i;
    int first = 0;
    int second = -3;
    int size;
    if (second > first)
        size = (second - first) + 1;   
    else
        size = (first - second) + 1;
    i = 0;
    res = ft_rrange(first, second);
    while (i < size)
    {
        printf("%i, ", res[i]);
        i++;
    }
}