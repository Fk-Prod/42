/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <mstarck@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 08:02:39 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/22 08:02:39 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	checkerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
			return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127 ||str[i] == 43 || str[i] == 45)
				return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if str[i] == str[j]
					return (0);
			j++;
		}
		i++;
	}
}
return (i);

int	nb_base(char str, char *base)
{
	int nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
				return (nb);
		nb++;
	}
	return (-1);
}

int	whitespaces(char *str,)
