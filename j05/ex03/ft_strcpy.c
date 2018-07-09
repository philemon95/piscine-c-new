/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:37:48 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/09 11:29:32 by phperrot         ###   ########.fr       */
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



char	 *ft_strcpy(char *dest, char *src)
{
	int i;
if (ft_strlen(src) <= ft_strlen(dest))
	{
		i = 1;
		dest[i-1] = src [i-1];
		while (src[i -1 ] != '\0')
		{
			dest[i] = src [i];
			i++;
		}
		return (dest);
	}
else
	{
		return("");
	}

}
