/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:38:24 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/24 10:50:28 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list *elem;

	if (!(elem = malloc(sizeof(elem))))
		return (NULL);
	elem->data = data;
	elem->next = NULL;
	return (elem);
}
