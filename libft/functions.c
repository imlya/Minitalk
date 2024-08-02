/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 10:35:12 by imatek            #+#    #+#             */
/*   Updated: 2024/06/30 16:45:45 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 0 && nb < 10)
	{
		ft_putchar (nb + '0');
	}
	else
	{
		ft_putnbr (nb / 10);
		ft_putnbr (nb % 10);
	}
}

void	ft_putnbr_base_unsigned(unsigned long nb, char *base)
{
	unsigned long	size_base;

	size_base = (unsigned long)ft_strlen(base);
	if (nb >= size_base)
		ft_putnbr_base_unsigned(nb / size_base, base);
	ft_putchar(base[nb % size_base]);
}

int	ft_len_base_unsigned(unsigned long nbr, int base)
{
	unsigned long	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{	
		i++;
		nbr = nbr / base;
	}
	return (i);
}
