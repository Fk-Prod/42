/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <mstarck@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 07:58:44 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/24 06:24:21 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (min >= max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int 	main(void)
{
		int 	*arr;
		int 	i;

		arr = ft_range(1, 10);
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
