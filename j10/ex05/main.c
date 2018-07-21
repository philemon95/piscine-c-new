/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:43:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/21 09:52:01 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int addition(int a, int b)
{
	return (a + b);
}

int	main(void)
{
	int tab[2];
	int (*f)(int, int);

	tab[0] = 3;
	tab[1] = 5;
	f = addition; 
	ft_is_sort(tab, 2,f);
}

