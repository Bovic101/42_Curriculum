/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 04:05:01 by vodebunm          #+#    #+#             */
/*   Updated: 2023/10/17 01:17:07 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

// This function is used to assign a specific value to a memory block
void	*ft_memset(void *s, int c, size_t length)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (length != 0)
	{
		*str = (unsigned char)c;
		str++;
		length--;
	}
	return (s);
}
