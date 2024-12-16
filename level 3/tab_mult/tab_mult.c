/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:39:43 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:39:46 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	sign;

	n = 0;
	i = 0;
	sign = 1;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}
	return (n * sign);
}

void	ft_putnbr(int nbr)
{
	int	n;

	n = 0;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	n = (nbr % 10) + '0';
	write(1, &n, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	aux;

	if (argc == 2)
	{
		i = 1;
		aux = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(aux);
			write(1, " x ", 3);
			ft_putnbr(i);
			write(1, " = ", 3);
			ft_putnbr(aux * i);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}
