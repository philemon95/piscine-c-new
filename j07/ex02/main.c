/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:25:59 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 12:01:47 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max);

int 	main(void)
{
	int *a;
	int i;
	int max;
	int min;

	max = 100;
	min = 10;
		
	printf("%d\n", ft_ultimate_range(&a, min, max));
	i = -1;
	
	while (++i < max - min)
	{
		printf("%d", a[i]);
	}	

	return(0);
}
