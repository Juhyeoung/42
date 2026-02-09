/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 10:51:08 by jukang            #+#    #+#             */
/*   Updated: 2026/02/05 10:51:49 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *a)
{
	int	len;

	len = 0;
	while (a[len])
	{
		len++;
	}
	return (len);
}

char	*ft_cp(int size, char *arr, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			arr[k++] = strs[i][j++];
		if (i != size - 1)
		{
			j = 0;
			while (sep[j])
				arr[k++] = sep[j++];
		}
		i++;
	}
	arr[k] = '\0';
	return (arr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		tot_len;

	i = 0;
	tot_len = 0;
	if (size == 0)
	{
		arr = (char *)malloc(1);
		return (arr);
	}
	while (i < size)
		tot_len += ft_strlen(strs[i++]);
	tot_len += ft_strlen(sep) * (size - 1);
	arr = (char *)malloc(1 * (tot_len + 1));
	i = 0;
	ft_cp(size, arr, strs, sep);
	return (arr);
}
