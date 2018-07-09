/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 14:59:22 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/09 15:40:08 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char *ft_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i])
	{
		
	}
	return ("salut");	
}
