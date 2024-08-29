/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <mstarck@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:27:09 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/26 08:05:55 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int 	main()
{
	printf("%d", ft_strcmp("Coucou", "Coutou"));
	printf("%d", ft_strcmp("Bonjour", "Bontour"));
	printf("%d", ft_strcmp("Bonjour", "Bonjour"));
}
*/
