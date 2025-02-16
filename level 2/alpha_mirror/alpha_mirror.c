/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:13:48 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:13:58 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char convers(char c)
{
    if (c >= 'a' && c <= 'z')
        return 'z' - (c - 'a');
    else if (c >= 'A' && c <= 'Z')
        return 'Z' - (c - 'A');
    return c;
}

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            char c = convers(argv[1][i]);
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
