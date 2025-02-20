/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpico-co <gpico-co@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:42:54 by gpico-co          #+#    #+#             */
/*   Updated: 2024/12/16 12:42:57 by gpico-co         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *tmp;

    if(*begin_list == NULL)
        return ;
    tmp = *begin_list;
    if((cmp)(tmp->data, data_ref) == 0)
    {
        *begin_list = *tmp->next;
        free(tmp);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
    }
}
