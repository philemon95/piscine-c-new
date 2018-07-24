/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 15:57:09 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 11:49:25 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *tmp;

	tmp = ft_create_elem(data);
	tmp->next = *begin_list;
	*begin_list = tmp;
}

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*list;

	list = ft_create_elem(av[1]);
	i = 2;
	while (i < ac)
	{
		ft_list_push_front(&list, (char *)(av[i]));
		i++;
	}
	return (list);
}
