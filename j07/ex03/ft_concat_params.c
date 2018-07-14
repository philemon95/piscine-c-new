/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 10:59:51 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/14 11:13:47 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char *ft_concat_params(int argc, char **argv)
{
	int i;
	int global_length;
	char *str;
	i = 1
	global_length = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			global_length += length(argv[i])
			i++;
		}
		global_length += argc - 1 -1; /*# of '\n'*/
		str = malloc(sizeof(*str) * (global_length + 1));
		
		i = 0;
		while (i < global_length)
			
	}
}
