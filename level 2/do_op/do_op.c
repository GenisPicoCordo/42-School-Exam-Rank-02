/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:28:06 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:28:12 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	operate(int a, int b, char op)
{
	int	res;

	if (op == '+')
		res = a + b;
	else if (op == '-')
		res = a - b;
	else if (op == '*')
		res = a * b;
	else if (op == '/')
		res = a / b;
	else
		res = a % b;
	return (res);
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;
	int		res;
	char	op;

	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2][0];
		res = operate(a, b, op);
		printf("%d", res);
	}
	printf("\n");
}
