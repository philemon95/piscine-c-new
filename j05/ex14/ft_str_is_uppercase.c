/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 22:56:55 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/16 11:52:47 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int i;
	int is_upper;

	i = 0;
	is_upper = 1;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) | (str[i] > 90))
		{
			is_upper = 0;
		}
		i++;
	}
	return (is_upper);
}
