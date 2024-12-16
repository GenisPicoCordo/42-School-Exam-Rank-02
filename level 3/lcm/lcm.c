/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:38:01 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:38:04 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	c;

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		c = a;
	else
		c = b;
	while (1)
	{
		if ((c % a == 0) && (c % b == 0))
			return (c);
		c++;
	}
}
