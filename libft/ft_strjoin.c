/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 18:48:45 by imatek            #+#    #+#             */
/*   Updated: 2024/05/26 15:07:25 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		len;
	char	*join;

	i = -1;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	join = malloc (sizeof(char) * (len + 1));
	if (!join)
		return (NULL);
	while (s1[++i])
	{
		join[j] = s1[i];
		j++;
	}
	i = -1;
	while (s2[++i])
	{
		join[j] = s2[i];
		j++;
	}
	join[j] = '\0';
	return (join);
}

/*int	main()
{
	char	*s1 = "hello";
	char	*s2 = "ca va";
	
	__builtin_printf("%s", ft_strjoin(s1, s2));
	return (0);
}*/