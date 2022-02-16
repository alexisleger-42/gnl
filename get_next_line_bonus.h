/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleger <aleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:50:56 by aleger            #+#    #+#             */
/*   Updated: 2022/02/14 16:54:34 by aleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_verif_params(char *next_str, char *buf);
char	*ft_strjoin(char *next_str, char *buf);
char	*ft_new_next_str(char *next_str);
char	*ft_get_line(char *next_str);
char	*ft_read_next_str(int fd, char *next_str);
char	*get_next_line(int fd);

#endif
