/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jukang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:45:14 by jukang            #+#    #+#             */
/*   Updated: 2026/02/05 18:45:20 by jukang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG "i have an even number of arguments"
# define ODD_MSG "i have an odd number of arguments"

# define TRUE 1
# define FALSE 0
# define EVEN(val) ((val) % 2 == 0)
# define SUCCESS 1

typedef int	t_bool;
#endif
