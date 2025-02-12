/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:33:23 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:33:29 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strchr(char *abc, char c)
{
	int	i;

	i = 0;
	while (abc[i])
	{
		if (abc[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	process_string(char *str, char abc[26], int *j)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_strchr(abc, str[i]))
		{
			*j += 1;
			abc[*j] = str[i];
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	char	abc[26];
	int		j;

	if (argc == 3)
	{
		j = -1;
		process_string(argv[1], abc, &j);
		process_string(argv[2], abc, &j);
	}
	write(1, "\n", 1);
}
