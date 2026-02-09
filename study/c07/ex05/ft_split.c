/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <jukang@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-08 08:01:47 by jukang            #+#    #+#             */
/*   Updated: 2026-02-08 08:01:47 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char *str, char *charset)
{
	int	i;
	int	j;
	char	*arr;

	i = 0;
	while (str[i] != '\0')
	{
		while (charset[j] != '\0')
		{
			if (str[i + j] == charset[j])
			{
				
			}	
		}
		i++;
	}
	return (arr);
}