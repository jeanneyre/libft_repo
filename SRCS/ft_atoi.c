/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:41:30 by crondeau          #+#    #+#             */
/*   Updated: 2021/06/04 14:32:42 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int					i;
	int					j;
	unsigned long long	valeur;

	i = 0;
	j = 1;
	valeur = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			j = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
		valeur = (valeur * 10) + str[i++] - 48;
	if (i >= 18 || valeur > 9223372036854775807)
	{
		if (j == 1)
			return (-1);
		return (0);
	}
	return ((int)(valeur * j));
}
