/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:00:39 by vodebunm          #+#    #+#             */
/*   Updated: 2023/10/17 01:14:36 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *s);
void	ft_memset(void *s, int c, size_t length);

int	main(void)
{
	char	temp[20];

	ft_memset(temp, 'z', 10);
	ft_memset(temp + 5, 'y', 10);
	printf("value: %s\n", temp);
	return (0);
}
