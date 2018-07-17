/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 08:57:14 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/17 18:32:02 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int powerten(int power)
{
	int i;
	int res;

	res = 1;
	i = -1;
	while (++i<power)
		res *= 10;
	return (res);
}

int	ft_incr_check(int nbr, int size)
{
	int i;
	int tmp;

	i = -1;
	tmp = -1
	while (++i < size)
	{
		if (nbr / power(size - i) > tmp)
			return 0
		tmp = nbr / power(size - i); 
	}
}

void ft_print_combn(int n)
{
}


int main(void)
{
	printf("%d", powerten(0));
	return (0);
}

