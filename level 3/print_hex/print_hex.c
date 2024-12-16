/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:38:50 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:38:54 by gpico-co         ###   ########.fr       */
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

void	ft_puthex(int n, char *base)
{
	int	nb;

	if (n >= 16)
		ft_puthex(n / 16, base);
	nb = n % 16;
	write(1, &base[nb], 1);
}

int	main(int argc, char **argv)
{
	int		n;
	char	*base;

	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		base = "0123456789abcdef";
		ft_puthex(n, base);
	}
	write(1, "\n", 1);
}
