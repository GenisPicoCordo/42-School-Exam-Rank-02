/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:36:32 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:36:36 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len_calc(int start, int end)
{
	if (end - start < 0)
		return ((end - start) * -1);
	return (end - start);
}

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	len;
	int	i;

	len = len_calc(start, end);
	i = 0;
	res = (int *)malloc(sizeof(int) * (len + 1));
	while (i < len + 1)
	{
		if (start < end)
			res[i] = end--;
		else
			res[i] = start--;
		i++;
	}
	return (res);
}
