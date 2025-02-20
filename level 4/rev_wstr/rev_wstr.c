/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:43:38 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:43:42 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int l;
    int j;

    l = 0;
    j = 0;
    if (argc == 2)
    {
        while (argv[1][l])
            l++;
        l--;
        while (l >= 0)
        {
            while (l >= 0 && argv[1][l] != ' ')
                l--;
            j = l + 1;
            while (argv[1][j] != ' ' && argv[1][j] != '\0')
            {
                write(1, &argv[1][j], 1);
                j++;
            }
            if (l > 0)
                write(1, " ", 1);
            l--;
        }
        
    }
    write(1, "\n", 1);
    return 0;
}
