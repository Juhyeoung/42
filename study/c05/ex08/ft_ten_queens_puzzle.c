/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:48:56 by jukang            #+#    #+#             */
/*   Updated: 2026/02/03 15:49:31 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_ten_queens_puzzle(void)
{
	int	board[10][10] = {0,};
	int	q;
	int	count;

	count = 0;

	q = 10;
	for (int i=0;i<10;i++)
	{
		for (int j=0;j<10;j++)
		{
			
		}
		printf("\n");
	}
	return (count);
}

int main(){

	ft_ten_queens_puzzle();
	return 0;
}