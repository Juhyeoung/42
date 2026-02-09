/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 18:09:32 by jukang            #+#    #+#             */
/*   Updated: 2026/02/04 18:10:22 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *a)
{
	int	count;

	count = 0;
	while (*a)
	{
		a++;
		count++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dup;

	len = ft_strlen(src);
	i = 0;
	dup = (char *)malloc(1 * (len + 1));
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}
