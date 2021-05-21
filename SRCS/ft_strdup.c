/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:46:06 by crondeau          #+#    #+#             */
/*   Updated: 2021/05/20 14:15:50 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlb.h>

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*dup;

	i = 0;
	len = ft_strlen(str);
	dup = (char *)malloc(sizeof(*char) * len + 1);
	if (dup == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
