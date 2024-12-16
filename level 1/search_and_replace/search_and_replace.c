/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:12:21 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:12:29 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	check_char(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	str = argv[1];
	i = 0;
	if ((argc != 4) || argv[2][1] || argv[3][1])
	{
		write(1, "\n", 1);
		exit(1);
	}
	else if (!check_char(argv[1], argv[2][0]))
		while (str[i])
			write(1, &str[i++], 1);
	else
	{
		while (str[i])
		{
			if (str[i] == argv[2][0])
				write (1, &argv[3][0], 1);
			else
				write (1, &str[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
