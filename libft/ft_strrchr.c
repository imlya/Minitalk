/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:06:32 by imatek            #+#    #+#             */
/*   Updated: 2024/05/25 23:51:30 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	set;

	str = (char *)s;
	set = (char)c;
	i = ft_strlen(str);
	if (str == NULL)
		return (NULL);
	while (i >= 0)
	{
		if (str[i] != set)
			i--;
		else
			return (&str[i]);
	}
	return (0);
}
