/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:32:54 by crondeau          #+#    #+#             */
/*   Updated: 2021/06/03 14:01:23 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int	word;
	int	state;

	word = 0;
	state = 1;
	while (*s)
	{
		if (*s == c)
			state = 1;
		else
		{
			if (state == 1)
			{
				word++;
				state = 0;
			}
		}
		s++;
	}
	return (word);
}

int	ft_size_word(char const *s, char c)
{
	int	size;

	size = 0;
	while (*s && *s != c)
	{
		size++;
		s++;
	}
	return (size);
}

char	**ft_free(char **s)
{
	int	j;

	j = 0;
	while (s[j])
	{
		free(s[j]);
		j++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c) 
{
	char	**tab;
	int		i;
	int		j;

	if (s == 0)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * ft_count_word(s, c) + 1);
	if (!tab)
		return (NULL);
	i = 0;
	while (ft_count_word(s, c))
	{
		while (*s && *s == c)
			s++;
		tab[i] = (char *)malloc(sizeof(char) * ft_size_word(s, c) + 1);
		if (!tab[i])
			return (ft_free(tab));
		j = 0;
		while (*s && *s != c)
			tab[i][j++] = *s++;
		tab[i][j] = 0;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
