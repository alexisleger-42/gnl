/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleger <aleger@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 15:50:56 by aleger            #+#    #+#             */
/*   Updated: 2022/02/12 19:38:04 by aleger           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

int		ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_verif_params(char *left_str, char *buf);
char	*ft_strjoin(char *left_str, char *buf);
char	*ft_new_left_str(char *left_str);
char	*ft_get_line(char *left_str);
char	*ft_read_left_str(int fd, char *left_str);
char	*get_next_line(int fd);

#endif
