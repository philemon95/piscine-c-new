/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:06:03 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/06 15:13:20 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_putstr(char *str);

char *ft_strrev(char *str);

int		main(void)
{
	char str[]="salut";
	ft_putstr(ft_strrev(str));
	return (0);
}
