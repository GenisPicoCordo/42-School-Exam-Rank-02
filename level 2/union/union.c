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

int	already_seen(char *printed, char c, int len)
{
	int	i = 0;
	while (i < len)
	{
		if (printed[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	print_union(char *s1, char *s2)
{
	char	seen[256];
	int		count = 0;
	int		i = 0;

	
	while (s1[i])
	{
		if (!already_seen(seen, s1[i], count))
		{
			seen[count++] = s1[i];
			write(1, &s1[i], 1);
		}
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (!already_seen(seen, s2[i], count))
		{
			seen[count++] = s2[i];
			write(1, &s2[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		print_union(argv[1], argv[2]);
	else
		write(1, "\n", 1);
	return (0);
}
