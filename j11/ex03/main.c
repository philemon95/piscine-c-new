/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:10:45 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 11:10:33 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, void *data);
int ft_list_size(t_list *begin_list);
void 	print_list(t_list *list)
{
	t_list *tmp;
	
	tmp = list;
	while (tmp)
	{
		printf("%d\n", (int)(tmp->data));
		tmp = tmp->next;
	}
}

int		main(void)
{
	t_list *list;
	
	list = ft_create_elem((int*)(5));
//	ft_list_push_front(&list, (int*)8);
//	ft_list_push_front(&list, (int*)7);
	
	printf("%d", ft_list_size(list));
	return (0);
}
