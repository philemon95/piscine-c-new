/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 13:24:21 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/21 14:42:07 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

char *ft_read(void)
{
	char *buffer;
	int ret;
	buffer = malloc(sizeof(char) * 200 + 1);
	ret  = (read(STDIN_FILENO, buffer, 200));
	buffer[ret] = '\0';
	return (buffer);
}
