/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 09:00:34 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/05 02:08:51 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char c;
	int i;

	c = 'z';
	i = 0;
	while (i < 26)
	{
		ft_putchar(c);
		i = i + 1;
		c--;
	}
}
