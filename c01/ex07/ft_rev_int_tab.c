/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <jukang@student.42gyeongsan.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:44:48 by jukang            #+#    #+#             */
/*   Updated: 2026/01/25 21:21:33 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	temp;

	a = 0;
	while (a < size / 2)
	{
		temp = tab[a];
		tab[a] = tab[size - a - 1];
		tab[size - a - 1] = temp;
		a++;
	}
}

int main(){
	int a[5] = {1,2,3,4,5};
	ft_rev_int_tab(a,5);
	for(int i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
