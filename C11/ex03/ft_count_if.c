/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <mstarck@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 08:14:37 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/28 07:05:05 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_count_if(char **tab, int length, int (*f)(char))
{
	int	i;
	int	count;

	while (i = length)
	{
		if ((*f)(tab[i]))
			count++;
		i++;
	}
	return (count);
}

int	ft(char *str)
{
	if (*str == 'A')
		return (1);
	return (0);
}
/*
int	main(void)
{
	char	**array;
	int		i;

	array = malloc(3 * sizeof(char *));
	array[0] = "A";
	array[1] = "Z";
	array[2] = NULL;
	printf("%d\n", ft_count_if(array, 3, ft));
}
*/