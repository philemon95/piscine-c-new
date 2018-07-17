/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:51:57 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/17 14:34:25 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

int		ft_check(int **board, int col, int row)
{
	int i;
	/* a etoffer, pour l instant seulement pour test */
	printf("Entering ft_check \n");

	i = -1;
	while (++i < 8)
	{
		printf("Entering loop #%d\n", i);
		printf("Entering loop col = %d  \n", col);	
	
		if (board[col][i] == 1)
			return 0;
	}
	return 1;
}
int 	ft_print(int **board)
{
	int i;
	int row;
	i = -1;
	row = 2;
	while (++i < 8)
	{
		ft_putchar('0' + board[i][row]);
	}
}


int 	ft_fill(int **board,int col,int row)
{
	printf("Entering ft_fill \n");
	if (ft_check(board, col, row))
	{
		printf("Entering case \n");
		board[col][row] = 1;
		if (col < 7)
			ft_fill(board, col + 1,0);
		else 
		{
			ft_print(board);
			ft_fill(board,col,row + 1);
		}
	}
	else 
	{
		board[col][row] = 0;
		ft_fill(board, col, row+1);
	}
}

void ft_eight_queens_puzzle_2(int size)
{
	int board[size][size];
	int i;
	int j;
	printf("entering the loop\n");
	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j <size)
			board[i][j] = 0;
	}
	ft_fill(board, 0, 0);

}
