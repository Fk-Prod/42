/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <mstarck@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 07:02:04 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/28 07:04:13 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
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

	i = 0;
	array = malloc(3 * sizeof(char*));
	array[0] = "A";
	array[1] = "Z";
	array[2] = NULL;
	while (i < 3)
	{
		printf("%d\n", ft_any(&array[i], ft));
		i++;
	}
}
*/