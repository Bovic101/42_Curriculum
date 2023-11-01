/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vodebunm <vodebunm@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:32:53 by vodebunm          #+#    #+#             */
/*   Updated: 2023/11/01 15:40:16 by vodebunm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//Free the memory of allocated array of strings after split
static void	ft_freeup(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		free(s);
		i++;
	}
	free(s);
}
//Function count the number of substringwords in the input string

static int	ft_subwordcount(char *str, char c)
{
	int	i;
	int	substr_word;

	i = 0;
	substr_word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			substr_word++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (substr_word);
		}
		i++;
	}
	return (substr_word);
}
//Function used to copy a word from the input string into aonther array of char

static void	ft_strcpy(char *dest, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] != '\0' && str[j] == c)
		j++;
	while (str[j + i] != c && str[j + i] != '\0')
	{
		dest[i] = str[j + i];
		i++;
	}
	dest[i] = '\0';
}
//The function allocates memory for a word from the input str using arg char c

static char	*ft_alloc(char *str, char c, int *input)
{
	char	*word;
	int		i;

	i = *input;
	word = NULL;
	while (str[*input] != '\0')
	{
		if (str[*input] != c)
		{
			while (str[*input] != '\0' && str[*input] != c)
				*input += 1;
			word = (char *)malloc(sizeof(char) * (*input + 1));
			if (word == NULL)
				return (NULL);
			break ;
		}
		*input += 1;
	}
	ft_strcpy (word, str, c, i);
	return (word);
}
//Function that split the input str to array of words using the delimiter char c

char	**ft_split(char const *str, char c)
{
	char	**split;
	int		i;
	int		j;
	int		pos;

	if (str == NULL)
		return (NULL);
	i = 0;
	pos = 0;
	j = ft_subwordcount((char *)str, c);
	split = (char **)malloc(sizeof(char *) * (j + 1));
	if (split == NULL)
		return (NULL);
	split[j] = NULL;
	while (i < j)
	{
		split[i] = ft_alloc(((char *)str), c, &pos);
		if (split[i] == NULL)
		{
			ft_freeup(split[i]);
		}
		i++;
	}
	return (split);
}
