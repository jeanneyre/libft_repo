/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crondeau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 10:41:30 by crondeau          #+#    #+#             */
/*   Updated: 2021/05/20 10:48:03 by crondeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	valeur;

	i = 0;
	j = 0;
	valeur = 0;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			j++;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		valeur = (valeur * 10) + str[i] - 48;
		i++;
	}
	if ((j % 2) == 1)
		return (valeur * -1);
	else
		return (valeur);
}
