/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:07:28 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:07:55 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int	n;
	int	sign;

	sign = 1;
	if (nbr < 0)
	{
		sign = -1;
		nbr *= -1;
	}
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	n = nbr % 10 + '0';
	write (1, &n, 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0 && i % 3 != 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}
