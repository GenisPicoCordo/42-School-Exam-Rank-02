/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:43:57 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:44:00 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int is_space(char c)
{
    return(c == ' ' || c >= 9 && c <= 13);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return(i);
}

int main(int argc, char **argv)
{
    int i, j, l, firstword, word_printed;
    char *word;

    i = 1;
    l = 0;
    j = 0;
    firstword = 1;
    word_printed = 0;

    if (argc != 2 || ft_strlen(argv[1]) == 0)
    {
        write(1, "\n", 1);
        return (0);
    }
    word = (char *)malloc(sizeof(char) * (ft_strlen(argv[1]) + 1));
    if(!word)
        return(0);
    while(argv[1][j])
    {
        while(is_space(argv[1][j]))
            j++;
        if(firstword)
        {
            while(argv[1][j] && !is_space(argv[1][j]))
            {
                word[l] = argv[1][j];
                j++;
                l++;
            }
            word[l] = '\0';
        }
        firstword = 0;
        if (argv[1][j] && !is_space(argv[1][j]))
        {
            if (word_printed)
                write(1, " ", 1);

            while (argv[1][j] && !is_space(argv[1][j]))
            {
                write(1, &argv[1][j], 1);
                j++;
            }
            word_printed = 1;
        }
    }
    if (l > 0)
    {
        if (word_printed)
            write(1, " ", 1);

        l = 0;
        while (word[l])
        {
            write(1, &word[l], 1);
            l++;
        }
    }
    free(word);
    write(1, "\n", 1);
    return (0);
}
