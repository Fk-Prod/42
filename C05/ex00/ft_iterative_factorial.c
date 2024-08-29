/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 06:23:24 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/22 09:58:17 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	a;

	i = 1;
	a = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
		a *= i++;
	return (a);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_iterative_factorial(5));
}
*/
