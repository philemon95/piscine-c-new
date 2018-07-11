/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:39:53 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/11 15:33:14 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <string.h>

int		ft_putchar(char c);

void	ft_putstr(char *str);

char *ft_strstr(char *str, char *to_find);

int		main(void)
{
	char to_find[] = "ysalut";
	char str[] = "yyyyyysalut0";
	ft_putstr(strstr(str, to_find));
	ft_putchar('\n');
	ft_putchar('\n');
	ft_strstr(str, to_find);
	/*	ft_putstr(ft_strstr(str, to_find));
*/	return(0);
}
