/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:13:21 by jukang            #+#    #+#             */
/*   Updated: 2026/02/02 17:14:51 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0)
	{
		if (nb <= 1)
			return (1);
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else
		return (0);
}
