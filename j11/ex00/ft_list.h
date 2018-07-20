/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 09:44:22 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/20 11:59:09 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef __FT_LIST_H
#	define __FT_LIST_H

typedef	struct	s_list t_list;

struct 			s_list
{
	void *data;
	void *next;
}				t_list;

#	endif
