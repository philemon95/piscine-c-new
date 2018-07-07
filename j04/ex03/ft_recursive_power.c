/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:27:57 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/07 14:41:03 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	g_result = 1;

int ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		g_result = nb * ft_recursive_power(nb, power-1);
		printf("%d \n", g_result);
	}
	else
	{
		if (power == 0)
		{
			return (g_result);
		}
		else
		{
			return (0);
		}
	}
}
