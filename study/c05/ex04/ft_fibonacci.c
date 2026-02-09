/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:31:08 by jukang            #+#    #+#             */
/*   Updated: 2026/02/02 20:32:53 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index >= 0)
	{
		if (index == 0)
			return (0);
		else if (index == 1)
			return (1);
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else
		return (-1);
}
