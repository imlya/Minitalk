/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:48:39 by imatek            #+#    #+#             */
/*   Updated: 2024/06/30 16:46:27 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_hexa(va_list pa, char flag)
{
	unsigned int	val;

	val = va_arg(pa, unsigned int);
	if (flag == 'x')
		ft_putnbr_base_unsigned(val, "0123456789abcdef");
	if (flag == 'X')
		ft_putnbr_base_unsigned(val, "0123456789ABCDEF");
	return (ft_len_base_unsigned(val, 16));
}
