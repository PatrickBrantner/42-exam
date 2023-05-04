/*
Assignment name	: ft_strpbrk
Expected files	: ft_strpbrk.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strpbrk
(man strpbrk).

The function should be prototyped as follows:

char	*ft_strpbrk(const char *s1, const char *s2);
*/

#include <string.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;

/*     if (s1[0] == '\0' || s2[0] == '\0')
        return (0);  */
/*     if (!s1 || !s2)
        return (0);  */ 
    while (*s1)
    {
        i = 0;
        while (s2[i] != '\0')
        {
            if (s2[i] == *s1)
                return ((char *)s1);
            i++;
        }
        s1++;
    }
    return (0); 
}

int main(int argc, char **argv)
{
    (void)argc;
    printf("%s\n", strpbrk(argv[1], argv[2]));
    printf("%s\n", ft_strpbrk(argv[1], argv[2]));     
}
