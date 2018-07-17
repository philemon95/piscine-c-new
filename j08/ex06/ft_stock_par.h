/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 08:38:14 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 09:25:54 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_STOCK_PAR_H__
#define __FT_STOCK_PAR_H__

#include <unistd.h>

struct s_stock_par
{
	int size_param;
	char *str;
	char *copy;
	char **tab;
} t_stock_par;


char **ft_split_whitespaces(char *str);
struct s_stock_par *ft_param_to_tab(int ac, char **av);
int ft_putchar(char c);

#endif
