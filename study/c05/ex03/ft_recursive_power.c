/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:21:46 by jukang            #+#    #+#             */
/*   Updated: 2026/02/02 18:22:27 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power >= 0)
	{
		if (power == 0)
			return (1);
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else
		return (0);
}
