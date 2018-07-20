/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 13:30:41 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/20 15:04:02 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#define BUF_SIZE 1


void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_read(char *file,int  number)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	int		i;
	char 	*output;
	i = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	/* COUNTS # OF SIGNS IN FILE */
	while (ret = (read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		i++;
	}
	if (!(output = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	while (ret = (read(fd, output, BUF_SIZE)))
	{
		output[i] = read(fd, 1, 1);
		output[ret] = '\0';
	}
	while (number > 0)
	{
		ft_putchar(output[i]);
		ft_putchar('\n');
		i--;
		number --;
	}

	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
	printf("\n\n %d \n\n", i);
	return (0);
}

int			main(int ac, char **av)
{
	if (ac > 2)
	{
		ft_putstr("Too many arguments.");
		return (0);
	}
	if (ac == 1)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	ft_read(av[1], 5);
	return (0);
}
