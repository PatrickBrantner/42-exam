#include <unistd.h>

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;

        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 91 - (argv[1][i] - 64); 
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = 123 - (argv[1][i] - 96);
            write(1,&argv[1][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}