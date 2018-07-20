/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 18:24:27 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 18:30:03 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));
{
	int i;
	int *tmp;

	i = 0;
	while (i < ft_strlen(*tab) - 1)
	{
		if (cmp(tab[i], tab[i+1]i) < 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tab[i];
			i = -1;
		}
		i++;
	}
}
