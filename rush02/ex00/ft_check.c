/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 14:36:28 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/21 15:05:07 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"
#include "stdio.h"

int	get_rows(char *input)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (input[i] != '\0')
	{
		if (input[i] == '\n')
			j++;
		i++;
	}
	return (j);
}

int get_cols(char *input)
{
	int i;

	i = 0;
	while (input[i] != '\n')
		i++;
	return (i);
}

int get_check_colle04

int	main(void)
{
	char *output;

	output = ft_read();
	printf("%d -- ", get_cols(output));
	printf("%d",	get_rows(output));
	return (0);
}
