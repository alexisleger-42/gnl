/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleger <aleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:50:51 by aleger            #+#    #+#             */
/*   Updated: 2022/02/12 19:38:25 by aleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

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

char	*ft_verif_params(char *left_str, char *buf)
{
	if (!left_str || !buf)
		return (NULL);
	return (left_str);
}

char	*ft_strjoin(char *left_str, char *buf)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!left_str)
	{
		left_str = malloc(sizeof(char));
		left_str[0] = '\0';
	}
	ft_verif_params(left_str, buf);
	str = malloc(sizeof(char) * (ft_strlen(left_str) + (ft_strlen(buf)) + 1));
	if (!str)
		return (NULL);
	while (left_str[i])
	{
		str[i] = left_str[i];
		i++;
	}
	while (buf[j])
		str[i++] = buf[j++];
	str[i] = '\0';
	free(left_str);
	return (str);
}
