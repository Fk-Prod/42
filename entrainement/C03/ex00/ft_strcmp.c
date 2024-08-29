/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:35:43 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/14 13:09:08 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*
int		main()
{
		printf("%d", ft_strcmp("Hello", "Hello1"));
		printf("\n%d", ft_strcmp("Hello", "He"));
		printf("\n%d", ft_strcmp("He", "Hello"));
		printf("\n%d", ft_strcmp("Hello", "Hello"));
}
*/
