/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 06:04:24 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/18 06:34:41 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_len(char *str)
{
	int		len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_str_len(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;

	if (!ft_check_base(base))
		return ;
	base_len = ft_str_len(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	else if (nbr >= base_len)
	{
		ft_putnbr_base(nbr / base_len, base);
		ft_putnbr_base(nbr % base_len, base);
	}
	else
		ft_putchar(base[nbr]);
}

int	main(void)
{
	ft_putnbr_base(128, "0123456789abcdef");
	return (0);
}
