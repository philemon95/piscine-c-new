/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 11:16:49 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/14 13:09:33 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int			length(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char **ft_split_whitespaces(char *str)
{
	int i;
	int j;
	int k;
	int nb_words;
	int nb_char;
	char **tabwords;
	int index;
	i = 0;
	nb_words = 1;
	while ((str[i] == ' ') | (str[i] == '\n') | (str[i] == '\r') | 
			(str[i] == '\t') | (str[i] == '\v'))
		i++;
	
	j = i;
	/* counting numbers of separators in the remaining part of the string */
	while (str[i+1] != '\0')
	{
		if (((str[i] == ' ') | (str[i] == '\n') | (str[i] == '\r') | (str[i] == '\t') | (str[i] == '\v')) &&(!((str[i+1] == ' ') | (str[i+1] == '\n') | (str[i+1] == '\r') | (str[i+1] == '\t') | (str[i+1] == '\v'))))
		nb_words++;	
		i++;
	}
	
	tabwords = malloc(sizeof(*str) * (nb_words + 1));
	i = 0;
	while (i < nb_words)
	{
		nb_char = 0;
		while (((str[j] == ' ') | (str[j] == '\n') | (str[j] == '\r') |
					(str[j] == '\t') | (str[j] == '\v') | (str[j] == '\0')))
			j++;
		
		index = j;

		while (!((str[j] == ' ') | (str[j] == '\n') | (str[j] == '\r') |
				(str[j] == '\t') | (str[j] == '\v') | (str[j] == '\0')))
		{
			nb_char++;
			j++;;
		}

		tabwords[i] = malloc(sizeof(*str) * (nb_char + 1));
		k = 0;	
			while (k < nb_char)
			{
				tabwords[i][k] = str[k+index];
				printf("%c", str[k+index]);
				k++;
			}
		printf(" ");
		i++;
		j++; /* pour decaler et squuzer un separateur */
	}
	printf("\n ----- %d ----\n", nb_words);
	return(tabwords);
}


int		main(void)
{
	char *str;
	char **res;
	int i;

	str="      ekwpeddekop  \n    ek dwk dewkodke ee s    a ";
	res = ft_split_whitespaces(str);	
	i = 0;
	while (res[0][i] != '\0')
	{
		printf("%c", res[0][i]);
		i++;
	}

	
	return(0);
}
