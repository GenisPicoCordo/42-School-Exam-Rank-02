/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:41:46 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:41:49 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	nbrl(int nbr)
{
	int	l;

	l = 0;
	if (nbr < 0)
		l++;
	while (nbr)
	{
		nbr /= 10;
		l++;
	}
	return (l);
}

char	*ft_itoa(int nbr)
{
	int		l;
	char	*res;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	if (nbr == 0)
		return ("0\0");
	l = nbrl(nbr);
	res = (char *)malloc(sizeof(char) * (l + 1));
	if (res == NULL)
		return (NULL);
	res[l] = '\0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		l--;
		res[l] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}

/*#include <stdio.h>
int	main(void)
{
	char	*s = ft_itoa(-10);
	printf("%s", s);
}*/
