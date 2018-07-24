/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 10:10:45 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 12:44:57 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void	ft_list_clear(t_list **begin_list);
void 	print_list(t_list *list)
{
	t_list *tmp;
	
	tmp = list;
	while (tmp)
	{
		printf("%s\n", (char*)(tmp->data));
		tmp = tmp->next;
	}
}

int		main(void)
{
	t_list *list;
	
	list = ft_create_elem((int*)5);
	list = ft_create	
	print_list(list);
	return (0);
}
