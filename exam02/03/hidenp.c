#include<unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    if (argc == 3)
    {
        while (argv[2][i])
        {
            if (argv[2][i] == argv[1][j])
                j++;
            i++;
        }
        if (argv[1][j] == '\0')
            write(1,"1",1);
        else    
            write(1,"0",1);
    }
    write(1,"\n",1);
}