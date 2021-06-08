/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:00:09 by crondeau          #+#    #+#             */
/*   Updated: 2021/06/03 16:15:51 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset (void *string, int c, size_t n)
{
	char	*str;

	str = string;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (string);
}
