/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 16:20:52 by crondeau          #+#    #+#             */
/*   Updated: 2021/05/26 10:51:37 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t size)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*source;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (i < size)
	{
		*((char *)dest + i) = *((char *)source + i);
		i++;
	}
	return (dest);
}
