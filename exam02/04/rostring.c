#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *argv)
{
    int i;

    i = 0;
    while (argv[i] != '\0')
        i++;
    return (i);
}

int     ft_first_word(char *argv)
{
    int i;

    i = 0;
    if (argv[i] == ' ' || argv[i] == '\t')
    {
        while (argv[i] == ' ' || argv[i] == '\t')
                i++;
    }
    while (argv[i] != ' ' && argv[i] != '\0' && argv[i] != '\t')
        i++;
    return (i);
}

int     main(int argc, char **argv)
{
    int str_len;
    int first_word;
    int i;
    int flag = 0;

    if (argc >= 2)
    {
        str_len = ft_strlen(argv[1]) - 1;
        first_word = ft_first_word(argv[1]);
        i = first_word;       
        
        while (argv[1][i] != '\0')
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            while (argv[1][i] != ' ' && argv[1][i] != '\0' && argv[1][i] != '\t')
            {
                flag = 1;
                write (1,&argv[1][i],1);
                i++;
            }
            if (flag == 1)
                write(1," ",1);
        }
        i = 0;
        while (i < first_word)
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                        i++;
            }
            write (1,&argv[1][i],1);
            i++;          
        }
    }
    write (1,"\n",1);
}