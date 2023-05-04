/*
Assignment name  : ft_putstr
Expected files   : ft_putstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
*/

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
