/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:00 by imatek            #+#    #+#             */
/*   Updated: 2024/05/21 12:35:28 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
		str[i++] = '\0';
}

/*int	main()
{
	char	str[] = "hello";
	
	ft_bzero(str + 1, 4);
	__builtin_printf("%c\n, %c, %c, %c, %c", 
		str[0], str[1], str[2], str[3], str[4]);
	return (0);
}*/