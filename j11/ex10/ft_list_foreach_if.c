/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 17:25:24 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 16:41:00 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr->next != NULL)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
			list_ptr->data = (*f)(list_ptr->data);	
		list_ptr = list_ptr->next;
	}
}
