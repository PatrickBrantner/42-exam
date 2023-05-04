/*
Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string as a parameter, and prints its words in
reverse order.

A "word" is a part of the string bounded by spaces and/or tabs, or the
begin/end of the string.

If the number of parameters is different from 1, the program will display
'\n'.

In the parameters that are going to be tested, there won't be any "additional"
spaces (meaning that there won't be additionnal spaces at the beginning or at
the end of the string, and words will always be separated by exactly one space).

Examples:

$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/

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
