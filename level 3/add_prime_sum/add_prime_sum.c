/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:34:10 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:34:13 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *s)
{
	int	nbr;

	nbr = 0;
	if (s[0] == '-')
		return (-1);
	while (*s)
		nbr = (nbr * 10) + (*s++ - '0');
	return (nbr);
}

int	ft_is_prime(int nbr)
{
	int	i;

	i = 2;
	if (nbr <= 1)
		return (0);
	while (i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int n)
{
	int	nb;

	if (n > 9)
		ft_putnbr(n / 10);
	nb = n % 10 + '0';
	write(1, &nb, 1);
}

int	main(int argc, char **argv)
{
	int	res;
	int	nbr;

	res = 0;
	if (argc != 2)
	{
		write(1, "0\n", 2);
		exit (1);
	}
	nbr = ft_atoi(argv[1]);
	while (nbr > 0)
	{
		if (ft_is_prime(nbr))
			res += nbr;
		nbr--;
	}
	ft_putnbr(res);
	write(1, "\n", 1);
}
