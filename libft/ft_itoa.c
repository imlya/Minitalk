/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:03:29 by imatek            #+#    #+#             */
/*   Updated: 2024/05/30 14:38:45 by imatek           ###   ########.fr       */
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

char	*ft_reverse(char *s)
{
	int		i;
	int		len;
	char	c;

	i = 0;
	len = ft_strlen(s) - 1;
	while (i < len)
	{
		c = s[len];
		s[len] = s[i];
		s[i] = c;
		i++;
		len--;
	}
	return (s);
}

char	*fill_string(char *array, long nbr, int sign)
{
	int	j;

	j = 0;
	while (nbr != 0)
	{
		array[j++] = ((nbr % 10) + '0');
		nbr /= 10;
	}
	if (sign == -1)
	{
		array[j] = '-';
		array[j + 1] = '\0';
	}
	else
		array[j] = '\0';
	return (array);
}

char	*ft_itoa(int n)
{
	int		sign;
	char	*array;
	long	nbr;

	nbr = n;
	sign = 1;
	if (nbr == 0)
	{
		array = malloc(sizeof(char) * 2);
		if (!array)
			return (NULL);
		array[0] = '0';
		array[1] = '\0';
		return (array);
	}
	if (nbr < 0)
	{
		sign = -1;
		nbr = -nbr;
	}
	array = malloc (sizeof(char) * (ft_len(n) + 1));
	if (!array)
		return (NULL);
	return (ft_reverse(fill_string(array, nbr, sign)));
}

// int	main()
// {
// 	__builtin_printf("%s", ft_itoa(1000034));
// 	return (0);
// }
