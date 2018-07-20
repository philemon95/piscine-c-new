/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:30:26 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 11:57:07 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		len = max - min;
		*range = malloc(sizeof(int) * (len));
		i = 0;
		while (i < len)
		{
			(*range)[i] = min + i;
			i++;
		}
		return (max - min);
	}
}
