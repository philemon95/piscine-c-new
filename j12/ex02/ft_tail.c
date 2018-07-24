/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 13:30:41 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/23 11:03:45 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#define BUF_SIZE 1
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int nb;
	int sign;
	int i;

	nb = 0;
	i = 0;
	sign = 1;
	while (str[i] == '\n' | str[i] == '\r' | str[i] == '\t'
			| str[i] == '\f' | str[i] == '\v' | str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -sign;
		i++;
	}
	while ((str[i] - '0') >= 0 && ('9' - str[i]) >= 0)
	{
		nb = (nb * 10 + (str[i] - '0'));
		i++;
	}
	return (nb * sign);
}

int ft_read(int argc, char **argv, int nb_octets)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];
	int i;
	int size;
	char *output;
	int j;

	j = 3;
	while (j < argc)
	{
		i = 0;
		fd = open(argv[j], O_RDONLY);
		if (fd == -1)
		{
			ft_putstr("tail: ");
			ft_putstr(argv[j]);
			ft_putstr(": No such file or directory");
			return (1);
		}
		if (argc > 4)
		{
			ft_putstr("==> ");
			ft_putstr(argv[j]);
			ft_putstr(" <==\n");
		}
		output = malloc(sizeof(char) * 1);
		while (ret = (read(fd, buf, BUF_SIZE)))
		{
			output[i] = buf[0];
			i++;
			buf[ret] = '\0';
		}
		size = i;
		close(fd);
		fd = open(argv[j], O_RDONLY);
		i = size - nb_octets;
		while ((i >= size - nb_octets  && i < size))
		{
			if (i >= 0)
				ft_putchar(output[i]);
			i++;
			//	ft_putstr(buf);
		}
		if (j < argc - 1)
			ft_putchar('\n');
		if (close(fd) == -1)
		{
			ft_putstr("close() error");
			return (1);
		}
		free(output);
		j++;
	}
	return (0);
}

int	main(int ac, char ** av)
{
	///	if (ac >2)
	//	{
	//		ft_putstr("Too many arguments.");
	//		return (0);
	//	}
	if (ac == 1)
	{
		ft_putstr("File name missing.");
		return (0);
	}

	ft_read(ac, av, ft_atoi(av[2]));
	return (0);
}
