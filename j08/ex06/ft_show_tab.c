/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 09:12:45 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/18 22:34:52 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

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
	}
	else
	{
		ft_putchar('0' + n);
		return (n);
	}
	return(n);
}

void				ft_putnbr(int nb)
{
	unsigned int	n;

	n = exceptions(nb);
	n = ft_puttens(n);
}

#include "stdio.h"

void ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;
	printf("Entering \n");
	i = 0;
	while (par[i].str != '\0')
	{
		printf("Entering 1st loop\n");
		j = 0;
		ft_putstr(par->copy);
		ft_putchar('\n');
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		while (par->tab[j] != '\0')
		{	
			printf("Entering 2nd loop \n");
			ft_putstr(par->tab[j]);
			ft_putchar('\n');
			j++;	
		}
		i++;
	}
}
