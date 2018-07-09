/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:14:37 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/09 16:51:38 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int racine;
	int resultat;

	racine = 0;
	resultat = 0;
	while (racine <= (nb / 2) && resultat == 0)
	{
		if (racine * racine == nb)
		{
			resultat = 1;
		}
		racine = racine + 1;
	}
	if (resultat == 1)
	{
		return (racine - 1);
	}
	else
	{
		return (nb / 2);
	}
}

int		ft_is_prime(int nb)
{
	int i;
	int racine;
	int premier;

	i = 1;
	racine = ft_sqrt(nb);
	premier = 1;
	if (nb == 0 | nb == 1)
	{
		premier = 0;
	}
	while (i++ <= racine && premier == 1)
	{
		if (nb % i == 0)
		{
			premier = 0;
		}
	}
	if (nb == 2)
	{
		premier = 1;
	}
	return (premier);
}
