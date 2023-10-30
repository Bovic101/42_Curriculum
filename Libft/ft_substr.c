/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 03:02:16 by vodebunm          #+#    #+#             */
/*   Updated: 2023/10/30 01:10:57 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//used to extract a substring from a string
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*s2;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	if (len >= size)
		len = size;
	s2 = (char *) malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	i = 0;
	if (start < ft_strlen(s))
	{
		while (i < len)
		{
			s2[i] = s[start];
			start++;
			i++;
		}
	}
	s2[i] = '\0';
	return (s2);
}
