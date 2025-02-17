/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:33:43 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:33:46 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    if(argc == 3)
    {
        int i = 0;
        int j = 0;

        while(argv[1][i] && argv[2][j])
        {
            if(argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if(argv[1][i] == '\0')
        {
            i = 0;
            while(argv[1][i])
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}
