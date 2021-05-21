/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 16:44:32 by crondeau          #+#    #+#             */
/*   Updated: 2021/05/21 17:28:45 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned const char	*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
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
