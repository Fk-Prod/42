/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:15:10 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/11 14:53:25 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	handle_write(int width, int height, int x, int y)
{
	if (y > 0 && (y < height - 1 || height == 1))
	{
		if (x == 0 || x == width - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
	else if (y == 0 && (x == width - 1 || x == 0))
		ft_putchar('A');
	else if (y == height - 1 && height != 1 && (x == width - 1 || x == 0))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int width,	int height)
{
	int	x;
	int	y;

	if (width <= 0 || height <= 0)
		return ;
	y = 0;
	while (y < height)
	{
		x = 0;
		while (x < width)
		{
			handle_write(width, height, x, y);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
