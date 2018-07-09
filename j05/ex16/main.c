/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:01:12 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/09 15:40:11 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>
char *ft_strcat(char *dest, char *src);

int		main(void)
{
	char hi[] = "salut";
	char dest[65] = "bonj";

	printf("%s",strcat(dest, hi));
	return (0);
}
