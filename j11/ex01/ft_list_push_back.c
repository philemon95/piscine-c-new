/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:56:26 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/20 13:01:24 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void ft_list_push_back(t_list **begin_list, void *data);
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}
