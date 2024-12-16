/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:34:28 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:34:31 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || c == 9)
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	i;
	int	in_space;

	if (argc == 2)
	{
		i = 0;
		in_space = 0;
		while (is_space(argv[1][i]))
			i++;
		while (argv[1][i])
		{
			if (is_space(argv[1][i]))
				in_space = 1;
			if (!is_space(argv[1][i]))
			{
				if (in_space)
					write(1, " ", 1);
				in_space = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
