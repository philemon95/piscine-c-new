/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:15:59 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/07 16:29:43 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

unsigned int	exceptions(int nb)
{
	unsigned int n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = nb * -1;
	}
	else
	{
		n = nb;
	}
	return (n);
}

int	ft_puttens(unsigned int n)
{
	int j;
	int p;
	j = 0;
	p = 1;
	if (n > 9)
	{
		while (n / p > 10)	
		{
			p = p * 10;
		}
		ft_putchar(n / p);
		n = n % p;
		ft_puttens(n);
	}
	else
	{
	return (n);
	}

}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = exceptions(nb);
	n = ft_puttens(n);
	ft_putchar('0' + n);
}
