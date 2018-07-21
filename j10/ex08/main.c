/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 09:43:52 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/21 11:23:46 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

int addition(char *a, char *b)
{
	a[0] = b[0];
	return (0);
}

int	main(void)
{
	char *tab[2];
	int (*f)(char *, char *);

	tab[0] = "salut";
	tab[1] = "bonjour";
	f = addition; 
	ft_advanced_sort_wordtab(tab,f);
}

