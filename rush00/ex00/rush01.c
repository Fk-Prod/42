/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstarck <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 11:03:04 by mstarck           #+#    #+#             */
/*   Updated: 2024/08/11 14:52:55 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	handle_write(int width, int height, int x, int y)
{
	if ((y == 0 && x == 0) || (x == width - 1 && y == height - 1
			&& height != 1 && width != 1))
		ft_putchar('/');
	else if ((y == height - 1 && x == 0) || (x == width - 1 && y == 0))
		ft_putchar('\\');
	else if (x == 0 || x == width - 1 || y == 0 || y == height - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
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
