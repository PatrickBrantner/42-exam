#include <stdio.h>
#include <string.h>

int     ft_strchr(const char *s, int c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return 1;
        i++;
    }
    return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while (s[i] != '\0')
    {
        if (ft_strchr(accept, s[i]) == 0)
            break;
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
    (void)argc;
    printf("%zu\n", strspn(argv[1], argv[2]));
    printf("%zu\n", ft_strspn(argv[1], argv[2]));
}