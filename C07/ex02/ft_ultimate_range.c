/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 08:26:59 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/24 06:28:23 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}
/*
int 	main(void)
{
	int 	*arr;
	int 	i;

	i = ft_ultimate_range(&arr, 1, 10);
	printf("size. %d\n", i);
	i = 0;
	while (i < 9)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	free(arr);
	return (0);
}
*/
