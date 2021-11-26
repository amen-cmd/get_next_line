/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaimi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 21:36:11 by mnaimi            #+#    #+#             */
/*   Updated: 2021/11/25 21:36:26 by mnaimi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/*  Testing Phase Includes  */
/* ------- WARNING -------- */
/* These should be removed  */
/*    before final build    */
# include<stdio.h>
# include <string.h>
/* ------------------------ */

/* Mandatory includes */
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

/* Prototypes */
char	*get_next_line(int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
char	*ft_strdup(const char *src);

#endif