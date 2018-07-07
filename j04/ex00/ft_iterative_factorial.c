/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 16:04:31 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/06 16:34:05 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <time.h>
#include <stdio.h>
int		ft_iterative_factorial(int nb)
{
	int i;
	int resultat;
	clock_t t1;
	clock_t t2;
	t1 = clock();

	i=1;
	resultat=1;
	while (i <= nb && t2-t1 < 2)
	{
	resultat = resultat * i;	
	i++;
	t2 =clock();
	}
	return (resultat);
}


