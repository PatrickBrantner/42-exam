#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        write(1,&str[i],1);
        i++;
    }
}

int     main(int argc, char **argv)
{
    (void)argc;
    ft_putstr(argv[1]);
    write(1,"\n",1);
}