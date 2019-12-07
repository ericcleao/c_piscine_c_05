/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecerquei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:14:30 by ecerquei          #+#    #+#             */
/*   Updated: 2019/12/06 22:38:36 by ecerquei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_solve_queens_puzzle(int row, int result[10], int *count);
int		ft_is_safe(int col_placement[10], int row, int column);
void	ft_print_solution(int col_placement[10]);
void	ft_putchar(char c);

int		ft_ten_queens_puzzle(void)
{
	int col_placement[10];
	int count;

	count = 0;
	ft_solve_queens_puzzle(0, col_placement, &count);
	return count;
}

void	ft_solve_queens_puzzle(int row, int result[10], int *count)
{
	int i;

	if (row == 10)
	{
		ft_print_solution(result);
		(*count)++;
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			result[row] = i;
			if (ft_is_safe(result, row, i))
			{
				ft_solve_queens_puzzle(row + 1, result, count);
			}
			result[row] = 0;
			i++;
		}
	}
}

int		ft_is_safe(int col_placement[10], int row, int column)
{
	int i;

	i = 0;
	while (i < row)
	{
		if (col_placement[i] == column)
		{
			return (0);
		}
		else if (column + row == i + col_placement[i] || (column - row == col_placement[i] - i))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	ft_print_solution(int col_placement[10])
{
	int i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(col_placement[i] + '0');
		i++;
	}
	write(1, "\n", 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
