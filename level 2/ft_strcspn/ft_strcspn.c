/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:29:12 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:29:15 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <aio.h>

int	reject_char(char c, const char *reject)
{
	int	i;

	i = 0;
	while (reject[i])
	{
		if (reject[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (!reject_char(s[i], reject))
			count++;
		else
			break ;
		i++;
	}
	return (count);
}
