/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 08:57:14 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/11 19:26:43 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c)
	{
		write(1, &c, 1);
		return (0);
	}

/*void 	ft_putnbr(int nb);*/

int		nb_puissance(int n)
{
	int i;
	int res;

	i = 0;
	res = 1;
	while (i++ < n)
	{
		res *= 10;
	}
	return (res);
}

void ft_print_comb(int n)
{
	int i;

	printf("%d", nb_puissance(n))
	while (i++ < n)
	{
	i++;		
	}
}

int main(void)
{
	ft_print_comb(n);
	return(0);
}

