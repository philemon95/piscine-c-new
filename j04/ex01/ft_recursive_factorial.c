/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:35:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/07 14:10:35 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int g_resultat = 1;

int		ft_recursive_factorial(int nb)
{
	if (nb > 1)
	{
		g_resultat = nb * ft_recursive_factorial(nb - 1);
	}
	return (g_resultat);
}
