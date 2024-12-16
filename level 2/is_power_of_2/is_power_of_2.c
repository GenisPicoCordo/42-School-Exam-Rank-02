/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:31:04 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:31:08 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	int	power;
	
	if (n == 1 || n == 2)
		return (1);
	power = 4;
	while (power <= n)
	{
		power *= 2;
	}
	if (power == n)
		return (1);
	return (0);
}
