/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iengels <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:37:55 by iengels           #+#    #+#             */
/*   Updated: 2022/11/19 20:55:13 by iengels          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*get_next_line(int fd)
{
	static char		*swap;
	char			*out;
	unsigned int	i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	swap = ft_buffer(fd, swap);
	if (swap == NULL)
		return (NULL);
	out = ft_return(swap);
	while (swap[i] != '\n' && swap[i] != '\0')
		i++;
	swap = ft_temp(swap, i);
	return (out);
}
