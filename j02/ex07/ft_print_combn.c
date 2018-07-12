/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 08:57:14 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/11 20:56:55 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int					ft_putchar(char c);
int					exposant(int n)
{
	int				p;
	int				j;

	j = 0;
	p = 1;
	if (n == 0 | n == 1)
	{
		return (1);
	}
	else
	{
		while (n / p > 1)
		{
			p = p * 10;
			j++;
		}
		return (j);
	}
}

unsigned int		exceptions(int nb)
{
	unsigned int	n;

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

int					ft_puttens(unsigned int n)
{
	int				j;
	int				p;

	j = 0;
	p = 1;
	if (n > 9)
	{
		while (n / p >= 10)
		{
			p = p * 10;
		}
		ft_putchar('0' + n / p);
		n = n % p;
		while (j++ < (exposant(p) - exposant(n)))
		{
			ft_putchar('0');
		}
		ft_puttens(n);
		return (0);
	}
	else
	{
		ft_putchar('0' + n);
		return (n);
	}
}

void				ft_putnbr(int nb)
{
	unsigned int	n;

	n = exceptions(nb);
	n = ft_puttens(n);
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

void ft_print_combn(int n)
{
	int i;
	int j;
	int range;
	int flagcroissant;
	range = nb_puissance(n-1);
	while (i++ < (range * 10) - 1)
	{
		j = 0;
		flagcroissant = 1;
		while (j++ < n)
		{
			if (!(i % nb_puissance(n - j) > (i % nb_puissance(n - j -1))))
			{
			flagcroissant = 0;
			}
		}
		if (flagcroissant == 1)
		{
			ft_putnbr(i);
			ft_putchar(',');	
		}
	}
}

int main(void)
{
	ft_print_combn(7);
	return (0);
}

