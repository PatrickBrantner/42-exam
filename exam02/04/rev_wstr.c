#include<unistd.h>

int     ft_strlen(char *argv)
{
    int i = 0;
    while (argv[i] != '\0')
            i++;
    return i;
}

int     main(int argc, char **argv)
{   
    int i;
    int index;
    int wordcount = 0;

    if (argc == 2)
    {
        i = ft_strlen(argv[1]);
        i--;
        while (i >= 0)
        {
            while ((argv[1][i] != ' ' && argv[1][i] != '\t' ) && i >= 0)
            {
                wordcount++;
                i--;
            }
            index = i - 1;
            i++;    
            while (wordcount > 0)
            {
                write(1,&argv[1][i],1);
                wordcount--;
                i++;
            }
            wordcount = 0;
            i = index;
            if (i > 0)
                write(1," ",1);
        }
    }
    write(1,"\n",1);   
}