/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_in_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:44:21 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:44:24 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_in_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				aux;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		else
			i++;
	}
}
