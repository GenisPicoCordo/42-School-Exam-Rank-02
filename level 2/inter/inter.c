/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:30:47 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:30:51 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strchr(const char *str, char c)
{
    int i;

    i = 0;
    while(str[i])
    {
        if(str[i] == c)
            return(1);
        i++;
    }
    return(0);
}

int main(int argc, char **argv)
{
    int i;
    char abc[26];
    int pos;
    char c;

    i = 0;
    pos = 0;
    if(argc == 3)
    {
        while(argv[1][i])
        {
            c = argv[1][i];
            if((ft_strchr(argv[2], c)) && (!ft_strchr(abc, c)))
            {
                abc[pos] = c;
                pos += 1;
                write(1, &c, 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}
