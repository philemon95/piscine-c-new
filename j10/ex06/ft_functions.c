/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:02:39 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 17:49:32 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

void	ft_addition(int int1, int int2)
{
	ft_putnbr(int1 + int2);
}

void	ft_substraction(int int1, int int2)
{
	ft_putnbr(int1 - int2);
}

void	ft_multiplication(int int1, int int2)
{
	ft_putnbr(int1 * int2);
}

void	ft_division(int int1, int int2)
{
	if (int2 == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(int1 / int2);
}

void	ft_modulo(int int1, int int2)
{
	if (int2 == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(int1 % int2);
}
