/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 17:08:18 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/10 16:26:16 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	else
	{
		nb = nb * ft_recursive_power(nb, power - 1);
		return (nb);
	}
}
int 	exceptions(char *base)
{
	int i;
	int j;
	int redondance;
	int signe;

	i = 0;
	redondance = 0; 
	signe = 0;
	while (i < ft_strlen(base))
		{
		j = 0;
		while (j < ft_strlen(base))
		{
			if (i != j && base[i] == base [j])
			{
				redondance = 1;
			}
			j ++;
		}
		i ++;
	}
 	i = 0;
	while (i < ft_strlen(base) &&  signe == 0)
	{
		if (base[i] == '+' | base[i] == '-')
		{
			signe = 1;
		}
		i++;
	}
	if (ft_strlen(base) <= 1 | redondance ==1 | signe == 1)
	{
		return (0);
	}
	else 
	{
		return (1);
	}

}	

void ft_putnbr_base(int nbr, char *base)
{
	int nb_base;
	int n;

	nb_base = ft_strlen(base);
	n = 0;
	if (exceptions(base) == 1)
	{
		while (nbr / ft_recursive_power(nb_base, n) > 1)
		{
		 	n ++;	
		}
		while (n >= 0)
		{
			ft_putchar(base[(nbr / ft_recursive_power(nb_base, n))]);
			nbr = nbr % ft_recursive_power(nb_base, n);
			n--;
		}
	}
}
