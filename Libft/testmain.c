/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 01:00:39 by vodebunm          #+#    #+#             */
/*   Updated: 2023/10/25 02:14:48 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**#include <string.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *s);
void	ft_memset(void *s, int c, size_t length);
void	ft_bzero(void *s, size_t n);
**/
int	main(void)
{
	int	result[3] = {25, 30, 35};

	int i = 0;
	while (i < 3)
	{
		ft_bzero(result, sizeof(result));
		printf("%d\n", result[i]);
		i++;
		
	}
	return (0);
}
