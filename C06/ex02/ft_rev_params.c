/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:36:01 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/22 12:00:39 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	main(int argc, char **argv)
{
	int		i;

	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i--;
	}
	return (0);
}
