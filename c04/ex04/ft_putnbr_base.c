/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                          :+:      :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:22:10 by jukang            #+#    #+#             */
/*   Updated: 2026/01/29 17:55:44 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_len(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_dup(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_valid(char *base)
{
	int		len;
	char	*temp;

	len = ft_len(base);
	temp = base;
	if (base[0] == '\0' || len <= 1)
		return (0);
	while (*temp)
	{
		if (*temp == '+' || *temp == '-'
			|| *temp == ' ' || (*temp >= 9 && *temp <= 13))
			return (0);
		temp++;
	}
	if (!ft_dup(base))
		return (0);
	return (1);
}

void	ft_convert(long nbr, int len, char *base)
{
	if (nbr == 0)
		return ;
	ft_convert(nbr / len, len, base);
	write(1, &base[nbr % len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	n;

	if (!ft_valid(base))
		return ;
	n = nbr;
	if (n == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	len = ft_len(base);
	ft_convert(n, len, base);
}
