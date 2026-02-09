/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <jukang@student.42gyeongsan.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:06:28 by jukang            #+#    #+#             */
/*   Updated: 2026/01/26 23:40:26 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	upper(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		*str -= 32;
	}
}

void	lower(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
	{
		*str += 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	flag;
	int	i;

	flag = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (flag == 1)
			{
				upper(&str[i]);
				flag = 0;
			}
			else
				lower(&str[i]);
		}
		else
			flag = 1;
		i++;
	}
	return (str);
}

int main(){
	char text[] = "1a";
	printf("%s", ft_strcapitalize(text));
	return 0;
}
