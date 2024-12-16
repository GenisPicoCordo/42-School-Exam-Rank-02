/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:43:21 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:43:24 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_free(char **res, int i)
{
	while (res[i])
	{
		free(res[i]);
		res[i] = NULL;
	}
	free(res);
	res = NULL;
}

int	is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	count_words(char *str)
{
	int	count;
	int	insp;
	int	i;

	count = 0;
	i = 0;
	insp = 1;
	while (str[i])
	{
		if (is_space(str[i]))
			insp = 1;
		if (!is_space(str[i]) && insp)
		{
			count++;
			insp = 0;
		}
		i++;
	}
	return (count);
}

char	*make_word(char *str, int start, int end, char **res, int wc)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (word == NULL)
		ft_free(res, wc);
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char **make_splits(char *str, char **res, int wc)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (word < wc)
	{
		while (is_space(str[i]))
			i++;
		j = i;
		while(str[j] && !is_space(str[j]))
			j++;
		res[word] = make_word(str, i, j, res, wc);
		word++;
		i = j;
	}
	return (res);
}

char	**ft_split(char *str)
{
	char	**res;
	int		wc;

	wc = count_words(str);
	res = (char **)malloc(sizeof(char *) * (wc + 1));
	if (res == NULL)
		return (NULL);
	res[wc] = NULL;
	res = make_splits(str, res, wc);
	if (res == NULL)
		return (NULL);
	return (res);
}

#include <stdio.h>
int	main(void)
{
	char **res = ft_split(" hola que ase ");
	int i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}
