/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:44:32 by crondeau          #+#    #+#             */
/*   Updated: 2021/05/31 12:10:12 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"//
#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dest;
	unsigned const char	*source;
	size_t				i;

	dest = (unsigned char *) dst;
	source = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)source)[i];
		if (((unsigned char *)source)[i] == (unsigned char)c)
		{
			return (&dest[i + 1]);
		}
		i++;
	}
	return (NULL);
}
