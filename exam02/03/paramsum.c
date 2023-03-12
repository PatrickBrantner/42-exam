#include<unistd.h>

void    ft_putnbr(int numb)
{
    char c;

    if (numb > 9)
        ft_putnbr(numb/10);
    c = (numb % 10) + '0';
    write(1,&c,1);

}

int     main(int argc, char **argv)
{
    int x = argc - 1;

    ft_putnbr(x);
    write(1,"\n",1);
}