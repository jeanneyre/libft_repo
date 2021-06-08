/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 10:46:29 by crondeau          #+#    #+#             */
/*   Updated: 2021/06/04 15:02:34 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;
	char	*str;

	if (!s)
		return (NULL);
	size = len;
	if (len > (size_t)(ft_strlen(s)))
		size = ft_strlen(s);
	if ((size_t)(start) > size)
		size = 0;
	// si len > strlen(s)
	// len = strlen(s);
	// str = (char *)malloc(sizeof(*s) * (len + 1));
	str = (char *)malloc(sizeof(*s) * (size + 1));
	if (str == NULL)
		return (NULL);

	/*i = -1;
	j = -1;
	while (s[++i])
		if (i >= start && ++j < len)
			str[j] = s[i];
	*/
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
