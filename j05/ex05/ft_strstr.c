/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:36:43 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/11 15:56:48 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	nb_occurences(char *string,char c)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == c)
		{
			res++;
		}
	i++;
	}
	return (res);
}


char *ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;
	int l;
	int flag;
	char *result;
	flag = 1;
	if (nb_occurences(str, to_find[0]) == 0)
	{
		return ("");
	}
	j = 0;
	i = 0;
	while (i++ < nb_occurences(str, to_find[0]))
	{
		j = 0;
		while (to_find[0] != str[j + i])
		{
			j++;
		}
		printf("%d \n", i);
	}
		k = 0;
		while (k++ <= ft_strlen(to_find) && flag == 1)
		{
			if (str[j+k] != to_find[k])
			{
				flag = 0;
			}
		}
	printf("nb occurencs= %d", nb_occurences(str, to_find[0]));
	if (flag == 1)
	{
		l=0;
		while ((k+l++) < ft_strlen(to_find))
		{
			printf("%c \n", to_find[j+l]);
			result[l] =(to_find[j+l]);
		}
	}
	return (result);
}

