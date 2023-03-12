#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    unsigned int i;

    if (a == 0 || b == 0)
        return 0;
    if ( a > b)
        i = a;
    else
        i = b;
    while (1)
    {
        if (i % a == 0 && i % b == 0)
            return i;
        i++;
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);

    printf("%d", lcm(x, y));

}