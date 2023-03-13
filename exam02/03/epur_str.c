#include <unistd.h>

int     main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    
    if (argc == 2)
    {
        while (argv[1][j] != '\0')
            j++;
        while (argv[1][j - 1] == ' ' || argv[1][j - 1] == '\t')
            j--;
        while (i < j)
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\0')
            {
                write(1,&argv[1][i],1);
                i++;
            }
            if (i != j)
                write(1," ",1);
        }
    }
    write(1,"\n",1);
}
