/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 12:32:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/07 13:24:59 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	first_last_row(int y, int j)
{
	if (j == 1 | j == y)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	middle_rows(int y, int j)
{
	if (j == 1 | j == y)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rows(int y, int x, int i)
{
	int j;

	j = 1;
	while (j <= y)
	{
		if (i == 1 | i == x)
		{
			first_last_row(y, j);
		}
		else
		{
			middle_rows(y, j);
		}
		j++;
	}
}

void	rush(int y, int x)
{
	int i;
	int j;

	i = 1;
	while (i <= x)
	{
		rows(y, x, i);
		ft_putchar('\n');
		i++;
	}
}
