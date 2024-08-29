/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:18:52 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/21 13:12:49 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb && i < 46341)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
/*
#include <stdio.h>

int 	main(void)
{
		printf("%d", ft_sqrt(36));
		return (0);
}
*/
