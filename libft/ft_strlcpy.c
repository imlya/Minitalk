/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:06:13 by imatek            #+#    #+#             */
/*   Updated: 2024/05/25 17:50:57 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (i > size)
		return (0);
	while (src[j])
		j++;
	if (size < 1)
		return (j);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}

/*int main(void)
{
	char src[] = "Couc";
	char dst[] = "Hello";
	size_t size = 7980757;

	__builtin_printf("%ld\n", ft_strlcpy(dst, src, size));

	return (0);
}*/