/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:31:21 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:31:26 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	l;

	if (argc == 2)
	{
		l = 0;
		while (argv[1][l])
			l++;
		l--;
		while (argv[1][l] && is_space(argv[1][l]))
			l--;
		while (argv[1][l] && !is_space(argv[1][l]))
			l--;
		l++;
		while (argv[1][l] && !is_space(argv[1][l]))
		{
			write(1, &argv[1][l], 1);
			l++;
		}
	}
	write (1, "\n", 1);
}
