/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:30:33 by imatek            #+#    #+#             */
/*   Updated: 2024/05/29 22:11:15 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		return (ft_calloc(1, 1));
	}
	s = s + start;
	if (len < ft_strlen(s))
		new_len = len;
	else
		new_len = ft_strlen(s);
	new_s = malloc(sizeof(char) * (new_len + 1));
	if (!new_s)
		return (NULL);
	new_s[new_len] = '\0';
	return (ft_memcpy(new_s, s, new_len));
}
//ft_strlen new_s + start < len 

/*int	main(void)
{
	char src[] = "Coucouuuu";

	__builtin_printf("%s\n", ft_substr(src, -1, 5));
	return (0);
}*/
