/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 15:00:09 by crondeau          #+#    #+#             */
/*   Updated: 2021/05/20 16:02:03 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset (void *pointer, int value, size_t count)
{
	char	*str;

	str = pointer;
	while (count)
	{
		*str = (unsigned char)value;
		str++;
		count--;
	}
	return (pointer);
}
