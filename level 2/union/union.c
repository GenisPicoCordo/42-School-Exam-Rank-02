/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:33:23 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:33:29 by gpico-co         ###   ########.fr       */
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

void process(const char *str, char *abc, int *pos)
{
    int i;
    char c;

    i = 0;
    while(str[i])
        {
            c = str[i];
            if(!ft_strchr(abc, c))
            {
                abc[*pos] = c;
                *pos += 1;
                write(1, &c, 1);
            }
            i++;
        }
}

int main(int argc, char **argv)
{
    char abc[26];
    int pos;

    pos = 0;
    if(argc == 3)
    {
        process(argv[1], abc, &pos);
        process(argv[2], abc, &pos);
    }
    write(1, "\n", 1);
}
