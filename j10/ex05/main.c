/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:43:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/25 18:42:38 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int addition(int a, int b)
{
	if (a < b)
		return (-1);
	if (a > b)
		return (5);
	else 
		return (0);
}

int	main(void)
{
	int tab[] = {0, 0, 0, 0, -1};
	int (*f)(int, int);

	f = addition; 
	printf("%d", ft_is_sort(tab, 5,f));

}

