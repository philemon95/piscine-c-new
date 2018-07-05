/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:15:59 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/05 15:23:35 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_putchar(char c);

void    ft_putnbr(int nb)
	{
		unsigned int    n;

	   	if (nb < 0)
		{	
		ft_putchar('-');
		n = nb - 1;
		}
		else
		{
		n = nb;
		}	

	    if ( n >= 10)
	    {
		ft_putchar('0' + n / 10);
		ft_putchar ('0' + n % 10);
		}
		else
		{
			ft_putchar ('0' +  n);
		}
	}
