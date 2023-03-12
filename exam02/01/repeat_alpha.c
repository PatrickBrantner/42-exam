#include <unistd.h>

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;
        int j;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                j = argv[1][i] - 96;
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                j = argv[1][i] - 64;
            else
                j = 1;
            while (j != 0)
            {
                write(1,&argv[1][i],1);
                j--;
            }
            i++;
        }
    }
    write(1,"\n",1);
}