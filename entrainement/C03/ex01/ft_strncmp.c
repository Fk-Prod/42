/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 06:41:08 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/17 06:57:55 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}


#include <stdio.h>
#include <string.h>
void	print_cmp(char *s1, char *s2, unsigned int n)
{
	printf("%d %d\n", ft_strncmp(s1, s2, n), strncmp(s1, s2, n));
}
int main(void)
{
	print_cmp("Coucou", "Coucou", 6);
	print_cmp("Coucou", "Cocou", 6);
	print_cmp("Cucou", "Couuco", 5);
}
