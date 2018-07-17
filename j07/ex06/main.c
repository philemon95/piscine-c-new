/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 09:23:16 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/17 17:49:43 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char * ft_convert_base(char *nbr, char *base_from, char *base_to);
int convert_decimal(char *nbr, int basef_size);
int convert_baset(int nbr, char *base_to);
int 	main(void)
{
	int i = 0;
	while (i < 5)
	{
		printf("%c",ft_convert_base("5201","0126345","01234")[i]);
		i++;
	}
}
