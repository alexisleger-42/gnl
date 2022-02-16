/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleger <aleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:50:51 by aleger            #+#    #+#             */
/*   Updated: 2022/02/14 16:54:16 by aleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return (NULL);
}

char	*ft_verif_params(char *next_str, char *buf)
{
	if (!next_str || !buf)
		return (NULL);
	return (next_str);
}

char	*ft_strjoin(char *next_str, char *buf)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!next_str)
	{
		next_str = malloc(sizeof(char));
		next_str[0] = '\0';
	}
	ft_verif_params(next_str, buf);
	str = malloc(sizeof(char) * (ft_strlen(next_str) + (ft_strlen(buf)) + 1));
	if (!str)
		return (NULL);
	while (next_str[i])
	{
		str[i] = next_str[i];
		i++;
	}
	while (buf[j])
		str[i++] = buf[j++];
	str[i] = '\0';
	free(next_str);
	return (str);
}
