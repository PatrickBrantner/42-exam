#include <stdlib.h>
#include <stdio.h>

int	ft_wordlen(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

char	*word_dupe(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *word = malloc(sizeof(char) * (len + 1));

	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

void	fill_words(char **array, char *str)
{
	int word_index = 0;

	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while(*str != '\0')
        {
                array[word_index] = word_dupe(str);
		word_index++;
                while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
                        str++;
                while (*str == ' ' || *str == '\t' || *str == '\n')
                        str++;
        }
       
}

int	count_words(char *str)
{
	int wordnum = 0;
	
	while(*str == ' ' || *str == '\t' || *str == '\n')
	       str++;
	while(*str != '\0')
	{
		wordnum++;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
	return (wordnum);	
}

char	**ft_split(char *str)
{
	int	words;
	char	**array;

	words = count_words(str);
	array = malloc(sizeof(char *) * (words + 1));
	array[words] = 0;
	fill_words(array, str);
	return (array);	
}

int main (int argc, char **argv)
{
	int i = 0;
	int j;
    (void)argc;
    char **return2 = ft_split(argv[1]);

	while (return2[i])
	{
		j = 0;
		while (return2[i][j])
		{
			printf("%c", return2[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}