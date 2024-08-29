/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 07:50:44 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/21 08:11:53 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_show_numbers(int a)
{
	write (1, &a, 1);
}

void	ft_print_combn(int n)
{
	int		i;
	char	numbers[n - 1];
	char	interators[n - 1];

	i = 0;
	while (i <= n)
	{
		numbers[i - 1] = '0' + 8 - n + i;
		interators[i - 1] = i + '0';
		i++;
	}
	i = 0;
	while (i <= n)
	{
		numbers[i] = numbers[i - 1];
		while (interators[i] <= numbers[i])
		{
			ft_show_numbers(numbers[i]);
			interators[i]++;
		}
		i++;
	}
}
