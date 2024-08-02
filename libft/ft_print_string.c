/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:48:52 by imatek            #+#    #+#             */
/*   Updated: 2024/06/30 16:46:00 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_print_string(va_list pa)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(pa, char *);
	if (!str)
		return (write(1, "(null)", 6));
	ft_putstr(str);
	return (ft_strlen(str));
}
