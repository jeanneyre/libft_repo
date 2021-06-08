/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 17:24:03 by crondeau          #+#    #+#             */
/*   Updated: 2021/06/04 14:46:23 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (len == 0)
		return (0);
	//if (s1 == NULL && s2 == NULL && len == 0)
	//	return (0);
	while (*str1 == *str2 && ++i < len)
	{
		str1++;
		str2++;
	}
	return ((int)(*str1 - *str2));
}
