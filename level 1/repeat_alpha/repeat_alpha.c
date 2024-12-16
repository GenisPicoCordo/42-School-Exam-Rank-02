/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:10:23 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:10:35 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

void	multi_display(char c)
{
	int	prints;

	prints = 1;
	if (c >= 'a' && c <= 'z')
		prints += c - 'a';
	if (c >= 'A' && c <= 'Z')
		prints += c - 'A';
	while (prints > 0)
	{
		write(1, &c, 1);
		prints--;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (ft_isalpha(argv[1][i]))
				multi_display(argv[1][i]);
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
