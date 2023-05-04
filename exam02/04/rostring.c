/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/

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
