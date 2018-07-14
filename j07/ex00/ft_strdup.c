/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:47:30 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/14 10:18:58 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char		*ft_strdup(char *src)
{
	char	*str;
	int		len;

	len = length(src);
	str = malloc(sizeof(*str) * (len + 1));
	return (str);
}
