/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iengels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:44:21 by iengels           #+#    #+#             */
/*   Updated: 2022/11/19 20:55:14 by iengels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*temp;

	i = -1;
	j = 0;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		if (!s1 || !s2)
			return (NULL);
		s1[0] = '\0';
	}
	temp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!temp)
		return (NULL);
	while (s1[++i])
		temp[i] = s1[i];
	while (s2[j])
		temp[i++] = s2[j++];
	temp[i] = '\0';
	free(s1);
	return (temp);
}

int	ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != c && s[i] != '\0')
		i++;
	if (s[i] == c)
		return (1);
	else
		return (0);
}

char	*ft_buffer(int fd, char *swap)
{
	int		check;
	char	*buffer;

	check = 42;
	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (ft_strchr(swap, '\n') == 0 && check > 0)
	{
		check = read(fd, buffer, BUFFER_SIZE);
		if (check == -1)
		{
			free(buffer);
			free(swap);
			return (NULL);
		}
		buffer[check] = '\0';
		swap = ft_strjoin(swap, buffer);
	}
	free(buffer);
	return (swap);
}

char	*ft_return(char *swap)
{
	unsigned int	i;
	char			*s;

	i = 0;
	if (!swap[0])
		return (NULL);
	while (swap[i] != '\n' && swap[i] != '\0')
		i++;
	if (swap[i] == '\n')
		i++;
	s = (char *)malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	s[i] = '\0';
	while (i--)
		s[i] = swap[i];
	return (s);
}

char	*ft_temp(char *swap, int i)
{
	char			*s;
	unsigned int	c;

	c = 0;
	if (!swap[i])
	{
		free(swap);
		return (NULL);
	}
	if (swap[i] == '\n')
		i++;
	while (swap[i + c] != '\0')
		c++;
	s = (char *)malloc(sizeof(char) * (c + 1));
	if (!s)
		return (NULL);
	s[c] = '\0';
	while (c--)
		s[c] = swap[i + c];
	free(swap);
	return (s);
}
