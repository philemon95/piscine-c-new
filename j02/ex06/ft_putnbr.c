/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 15:15:59 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/06 10:31:56 by phperrot         ###   ########.fr       */
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

int	ft_puttens(int n)
{
	int j;
	int p;

	if (n >= 10)
	{
		p = 1;
		while (n / p >= 10)
		{
			p = p * 10;
		}
		ft_putchar('0' + n / p);
		n = (n % p);
		if (n <= 9)
		{
			j = 1;
			while (j <= p)
			{
				ft_putchar('0');
				j = j * 100;
			}
		}
		ft_puttens(n);
	}
	return (n);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	n = exceptions(nb);
	n = ft_puttens(n);
	ft_putchar('0' + n);
}
