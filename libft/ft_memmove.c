/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:48 by imatek            #+#    #+#             */
/*   Updated: 2024/05/25 18:36:16 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cpy(char *dest, char *src, size_t n)
{
	size_t	i;

	if (dest < src)
	{
		i = 0;
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			dest[i] = src[i];
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s_src;
	char	*s_dest;

	if (!src && !dest)
		return (NULL);
	s_src = (char *)src;
	s_dest = (char *)dest;
	ft_cpy(s_dest, s_src, n);
	return (dest);
}

/*int	main()
{
	__builtin_printf("%s", (char *)ft_memmove("hello", "youu", 1));
	return (0);
}*/