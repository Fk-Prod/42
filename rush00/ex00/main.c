/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canglard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 09:05:44 by canglard          #+#    #+#             */
/*   Updated: 2024/08/11 14:21:55 by mstarck          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char c);
int		ft_atoi(const char *str);
void	rush(int width, int height);

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		return (0);
	}
	rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}

int	is_numeric(char c)
{
	return (c >= '0' && c <= '9');
}

//converts a string (str) into an integer and returns it, it takes in account
//the character + and - at the first character of the string
//it stops converting at the first non-numerical character it encounters
//except for the - and + at index 0
int	ft_atoi(const char *str)
{
	int	isneg;
	int	cnt;
	int	val;

	cnt = 0;
	isneg = 0;
	if (str[0] == '+')
		cnt++;
	else if (str[0] == '-')
	{
		cnt++;
		isneg = 1;
	}
	val = 0;
	while (is_numeric(str[cnt]))
	{
		val = val * 10 + (str[cnt++] - '0');
	}
	if (isneg)
		val = -val;
	return (val);
}
