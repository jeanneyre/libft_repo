/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:44:22 by crondeau          #+#    #+#             */
/*   Updated: 2021/05/31 16:42:05 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlenm(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(char *str, int c)
{
	int		i;
	char	csearch;

	csearch = (unsigned char) c;
	i = ft_strlenm(str);
	while (i >= 0)
	{
		if (str[i] == csearch)
			return (str + i);
		i--;
	}
	return (NULL);
}
