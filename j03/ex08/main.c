/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 18:06:03 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/07 12:17:41 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_atoi(char *str);
int		main(void)
{
	
	int tens = 1;
	int j=0;

	while (j < 7)
	{
	tens = tens * 10;
	j++;
	}


	char str[]="	-	054 5644";

	printf("%d \n \n", ft_atoi(str));
	printf("%d", tens);
	return (0);
}
