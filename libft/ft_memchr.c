/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:37 by imatek            #+#    #+#             */
/*   Updated: 2024/05/26 00:01:06 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	set;

	str = (char *)s;
	set = (char)c;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (str[i] != set)
			i++;
		else
			return (&str[i]);
	}
	return (NULL);
}
