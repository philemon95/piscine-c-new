/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:39:53 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/09 11:29:34 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#include <string.h>

int		ft_putchar(char c);

void	ft_putstr(char *str);

	char     *ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[] = "salut";
	char dest[] = "yell";
	char dest1[] = "yell";
	char dest2[] = "yell";
/*	ft_putstr(strcpy(dest,src));
*/	ft_putchar('\n');
	ft_putstr(dest1);
	ft_putchar('\n');
	ft_putstr(ft_strcpy(dest2,src));

	return(0);

}

