/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:41 by imatek            #+#    #+#             */
/*   Updated: 2024/05/25 23:09:34 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s_s1;
	unsigned char	*s_s2;

	s_s1 = (unsigned char *)s1;
	s_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (s_s1[i] == s_s2[i])
			i++;
		else
			return ((unsigned char) s_s1[i] - (unsigned char) s_s2[i]);
	}
	return (0);
}
