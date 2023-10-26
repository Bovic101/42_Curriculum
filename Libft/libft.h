/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 02:10:25 by vodebunm          #+#    #+#             */
/*   Updated: 2023/10/26 16:00:01 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <ctype.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
size_t				ft_strlen(const char *s);
void				*ft_memset(void *s, int c, size_t length);
void				ft_bzero(void *s, size_t n);
char				*ft_strchr(const char *s, int c);
void				*ft_memcpy(void *dest, const void *src, size_t n);
char				*ft_strrchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2, size_t n);

#endif