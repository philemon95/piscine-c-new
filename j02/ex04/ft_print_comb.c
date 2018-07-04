/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 09:00:34 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/04 20:43:24 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_putchar(char c);
void	ft_print_comb(void)
{
	char c;
	int i;
	int j;
	int k;
	
	c = '0';
	i = 0;
	j = 0;
	k = 0;
	while (i <= 7)	
	{
	j = 1;
		while (j <= 8)
		{
		k = 0;	
				while (k <= 9)
				{
					if (i != j  && k != j && j != k )
					{
					 ft_putchar(c + i);
					 ft_putchar(c + j);
					 ft_putchar(c + k);
					 ft_putchar(',');
					 ft_putchar(' ');
					}
				k++;
				}
			j++;		
		}
	i++;	
	}
}
