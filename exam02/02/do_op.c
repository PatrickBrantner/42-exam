#include <stdlib.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    if (argc == 4)
    {
        int x = atoi(argv[1]);
        int y = atoi(argv[3]);
        if (argv[2][0] == '+') 
            printf("%d", x + y );
        else if (argv[2][0] == '-')
            printf("%d", x - y );
        else if (argv[2][0] == '*')
            printf("%d", x * y );
        else if (argv[2][0] == '/')  
            printf("%d", x / y );
        else if (argv[2][0] == '%') 
            printf("%d", x % y );                     
    }
    printf("\n");
}