/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:36:01 by vodebunm          #+#    #+#             */
/*   Updated: 2023/10/30 16:43:12 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// a function to trim a string after passing the desired char
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end ;
	size_t	new_len;
	char	*s2_trim;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end >= start && ft_strchr(set, s1[end]) != NULL)
	{
		end--;
	}
	new_len = end - start + 1;
	s2_trim = (char *)malloc(new_len + 1);
	if (s2_trim == NULL)
	{
		return (NULL);
	}
	strncpy(s2_trim, s1 + start, new_len);
	s2_trim[new_len] = '\0';
	return (s2_trim);
}
