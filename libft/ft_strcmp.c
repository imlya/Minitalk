/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 17:53:53 by imatek            #+#    #+#             */
/*   Updated: 2024/07/29 12:33:09 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] || s2[j])
	{
		if (j == 0 && s2[j] == '+')
			j++;
		if (s1[i] != s2[j])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[j]);
		i++;
		j++;
	}
	return (0);
}
