/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:45:23 by jukang            #+#    #+#             */
/*   Updated: 2026/02/02 17:46:05 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power >= 0)
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
	else
		return (0);
}
