#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j;

    while (s[i] != '\0')
    {
        j = 0;
        while (reject[j] != '\0')
        {
            if (reject[j] == s[i])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

int main(int argc, char **argv)
{
    printf("%zu\n", ft_strcspn(argv[1], argv[2]));
    printf("%zu\n", strcspn(argv[1], argv[2]));
}