/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/24 16:24:30 by crondeau          #+#    #+#             */
/*   Updated: 2021/05/25 11:42:00 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

char    *ft_strchr(char *str, int c)
{
    int                i;
    unsigned char    csearch;

    csearch = (unsigned char) c;
    i = 0;
    while (str[i])
    {
        if (str[i] == csearch)
            return (str + i);
        i++;
    }
    if (str[i] == csearch)
        return (str + i);
    return (NULL);
}
