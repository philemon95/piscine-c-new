/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 18:10:18 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/19 18:29:26 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_strcmp(char *s1, char *s2)
{
	int difference;
	int i;

	difference = 0;
	i = 0;
	while (difference == 0 && i <= ft_strlen(s1))
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			difference = s1[i] - s2[i];
		}
	}
	return (difference);
}

void ft_sort_wordtab(char **tab)
{
	int i;
	int *tmp;

	i = 0;
	while (i < ft_strlen(*tab) - 1)
	{
		if (ft_strcmp(tab[i], tab[i+1]) < 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tab[i];
			i = -1;
		}
		i++;
	}
}
