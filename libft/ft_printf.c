/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:44:51 by imatek            #+#    #+#             */
/*   Updated: 2024/07/09 16:59:12 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	int		i;
	int		val;
	va_list	pa;

	i = 0;
	val = 0;
	va_start(pa, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			val += ft_parse_printf(format[i + 1], pa);
			i++;
		}
		else
			val += (int)write(1, &format[i], 1);
		i++;
	}
	va_end(pa);
	return (val);
}

// int	main(void)
// {
// // 	char	c;

// // 	c = 'a';
// 	printf("%d\n", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
// 	printf(8, ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX));
// 	return (0);
// }
