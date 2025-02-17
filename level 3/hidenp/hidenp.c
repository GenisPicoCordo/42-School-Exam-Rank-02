/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:37:43 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:37:47 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;

    if (argc == 3)
    {
        while (argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (argv[1][i] == '\0')
            write(1, "1\n", 2);
        else
            write(1, "0\n", 2);
    }
    else
        write(1, "\n", 1);
    return 0;
}
