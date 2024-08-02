/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:05:56 by imatek            #+#    #+#             */
/*   Updated: 2024/05/25 23:25:24 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	set;

	str = (char *)s;
	set = (char)c;
	i = 0;
	while (str[i])
	{
		if (str[i] != set)
			i++;
		else
			return (&str[i]);
	}
	if (str[i] == set)
		return (&str[i]);
	return (NULL);
}
