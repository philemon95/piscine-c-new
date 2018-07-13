/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:51:57 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/12 16:31:47 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_is_free(int column, int row, int *queen)
{
	int i;
   	int res;
	i = 1;
	res = 1;
	while (i <= column)
	{
		if (queen[i] == row)
		{
			res = 0;
		}
		if (queen[i] - i == column -  row)
		{
			res = 0;
		}	

		if (i +  queen[i] == column + row)
		{
			res = 0;
		}
	i++;
	}
	
			return(res);
}

int    ft_print_solution(int *queen, int size)
{
	int i;

	i = 0;
	while (i++ < size)
		ft_putchar('0' + queen[i]);
		ft_putchar('\n');
	return (0);
}

void	ft_queenboard(int column, int row, int *queen, int size)
{
	if (column > size)
	{
		column = 1;
		row ++ ;
		ft_print_solution(queen, size);
	}
	while (row <= size && column <= size)
	{
		if (ft_is_free(column, row, queen) == 1)
		{
			queen[column - 1] = row;
			ft_queenboard(column + 1, 1, queen, size);
		}
		row++;
	}
}

void ft_eight_queens_puzzle_2(int size)
{
	int queen[size + 1];	
	int i;
	
	i = 0;
	while (i <= size)
	{
		queen[i] = 2;
		i++;
	}
	ft_queenboard( 1, 1, queen, size);

}
