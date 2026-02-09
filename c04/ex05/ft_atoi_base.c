/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:58:16 by jukang            #+#    #+#             */
/*   Updated: 2026/02/05 12:59:05 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_skip(char *str, int *ptr_i)
{
	int	m;

	m = 1;
	while (str[*ptr_i] == ' ' || (str[*ptr_i] >= 9 && str[*ptr_i] <= 13))
		(*ptr_i)++;
	while (str[*ptr_i] == '-' || str[*ptr_i] == '+')
	{
		if (str[*ptr_i] == '-')
			m *= -1;
		(*ptr_i)++;
	}
	return (m);
}

int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_valid_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	base_len;
	int	val;

	i = 0;
	sign = 1;
	result = 0;
	base_len = ft_valid_base(base);
	if (base_len <= 1)
		return (0);
	sign = ft_skip(str, &i);
	val = get_value(str[i], base);
	while (val != -1)
	{
		result = (result * base_len) + val;
		i++;
		val = get_value(str[i], base);
	}
	return (result * sign);
}
