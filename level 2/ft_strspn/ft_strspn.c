/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:30:28 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:30:31 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] != accept[0])
		i++;
	while (s[i] && s[i] == accept[j])
	{
		i++;
		j++;
	}
	return (j);
}
