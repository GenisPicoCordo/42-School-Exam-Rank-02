/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:34:28 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:34:31 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_space(char c)
{
    return (c == ' ' || (c >= 9 && c <= 13));
}

int main(int argc, char **argv)
{
    int i = 0;
    int word_started = 0;

    if (argc == 2)
    {
        while (is_space(argv[1][i]))
            i++;
        while (argv[1][i])
        {
            if (!is_space(argv[1][i]))
            {
                // Si ya hubo una palabra antes, imprimimos un espacio
                if (word_started)
                    write(1, " ", 1);
                // Imprimimos la palabra
                while (argv[1][i] && !is_space(argv[1][i]))
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
                word_started = 1;
            }
            else
            {
                while (argv[1][i] && is_space(argv[1][i]))
                    i++;
            }
        }
    }
    write(1, "\n", 1);
    return 0;
}
