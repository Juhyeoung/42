/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <jukang@student.42gyeongsan.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 23:31:26 by jukang            #+#    #+#             */
/*   Updated: 2026/01/26 15:46:22 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		if (!((*str >= 32 && *str <= 126)))
		{
			str[i] = '-';
		}
		write(1, str, 1);
		str++;
	}
}

int main(){
	char text[] = "Hello\nHow are you?";
	ft_putstr_non_printable(text);
	return 0;
}
