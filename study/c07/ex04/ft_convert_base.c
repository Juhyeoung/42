/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <jukang@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-07 03:15:19 by jukang            #+#    #+#             */
/*   Updated: 2026-02-07 03:15:19 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi(char *str, char *base, int len)
{
	int	result;
	int	temp;

	result = 0;
	temp = 0;
	while (*str != '\0')
	{
		temp = find_base(base, *str++);
		if (temp < 0)
			break ;
		result = result * len + temp;
	}
	return (result);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	num;
	int	sign;
	int	len;

	num = 0;
	sign = 1;
	len = base_check(base);
	while (is_space(*nbr))
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	num = ft_atoi(nbr, base, len);
	return (num * sign);
}

char	*ft_putnbr_base(int num, char *base, char *result, int len)
{
	int	i;
	int	temp;
	int	base_len;

	base_len = base_check(base);
	if (num == 0)
		result[0] = base[0];
	if (num < 0)
		result[0] = '-';
	i = len - 1;
	while (num != 0)
	{
		temp = num % base_len;
		if (temp < 0)
			temp *= -1;
		result[i] = base[temp];
		num /= base_len;
		i--;
	}
	result[len] = '\0';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	int		len;
	char	*result;

	if (base_check(base_from) < 2 || base_check(base_to) < 2)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	len = nbr_len(num, base_check(base_to));
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == 0)
		return (0);
	result = ft_putnbr_base(num, base_to, result, len);
	return (result);
}

int	is_space(char c)
{
	char	*space;

	space = " \n\t\v\f\r";
	while (*space != '\0')
	{
		if (c == *space)
			return (1);
		space++;
	}
	return (0);
}

int	base_check(char *base)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	j = 0;
	while (base[len] != '\0')
	{
		if (is_space(base[len]) || base[len] == '-' || base[len] == '+')
			return (0);
		len++;
	}
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

int	find_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	nbr_len(int nbr, int len)
{
	int	cnt;

	cnt = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
		cnt++;
	while (nbr != 0)
	{
		cnt++;
		nbr /= len;
	}
	return (cnt);
}