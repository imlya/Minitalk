/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_id.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:34:59 by imatek            #+#    #+#             */
/*   Updated: 2024/06/30 16:46:23 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr != 0)
	{	
		nbr /= 10;
		i++;
	}
	return (i);
}

int	ft_print_id(va_list pa)
{
	int	val;

	val = va_arg(pa, int);
	ft_putnbr(val);
	return (ft_len(val));
}
