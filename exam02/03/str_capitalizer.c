#include<unistd.h>

void    ft_capitalizer(char *str)
{
    int i = 0;

    while (str[i])    //--> while(str && str[i])
    {
        if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - i] == '\t' || i == 0))
            str[i] -= 32;
        else if ((str[i] >= 'A' && str[i] <= 'Z') && (str[i - 1] != ' ' && str[i - i] != '\t' && i != 0))
            str[i] += 32;
        write(1,&str[i],1);
        i++;
    }
}

int     main(int argc, char **argv)
{
    int i = 1;
    
    if (argc > 1)
    {
        while(argv[i])
        {
            ft_capitalizer(argv[i]);
            i++;
            write(1,"\n",1);
        }
    }
    else 
        write(1,"\n",1);
}
