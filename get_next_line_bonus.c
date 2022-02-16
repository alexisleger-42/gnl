/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleger <aleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:50:43 by aleger            #+#    #+#             */
/*   Updated: 2022/02/16 10:48:12 by aleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_new_next_str(char *next_str)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (next_str[i] && next_str[i] != '\n')
		i++;
	if (!next_str[i])
	{
		free(next_str);
		return (NULL);
	}
	str = malloc(sizeof(char) * (ft_strlen(next_str) - i + 1));
	if (!str)
		return (NULL);
	i++;
	while (next_str[i])
		str[j++] = next_str[i++];
	str[j] = '\0';
	free(next_str);
	return (str);
}

char	*ft_get_line(char *next_str)
{
	int		i;
	char	*str;

	i = 0;
	if (!next_str[i])
		return (NULL);
	while (next_str[i] && next_str[i] != '\n')
		i++;
	str = malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (next_str[i] && next_str[i] != '\n')
	{
		str[i] = next_str[i];
		i++;
	}
	if (next_str[i] == '\n')
	{
		str[i] = next_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_read_next_str(int fd, char *next_str)
{
	int		read_bytes;
	char	*buffer;

	read_bytes = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (!ft_strchr(next_str, '\n') && read_bytes != 0)
	{
		read_bytes = read(fd, buffer, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[read_bytes] = '\0';
		next_str = ft_strjoin(next_str, buffer);
	}
	free(buffer);
	return (next_str);
}

char	*get_next_line(int fd)
{
	static char	*next_str[4096];
	char		*line;

	if ((fd < 0 && fd > 4095) || BUFFER_SIZE <= 0)
		return (NULL);
	next_str[fd] = ft_read_next_str(fd, next_str[fd]);
	if (!next_str[fd])
		return (NULL);
	line = ft_get_line(next_str[fd]);
	next_str[fd] = ft_new_next_str(next_str[fd]);
	return (line);
}
