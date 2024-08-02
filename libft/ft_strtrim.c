/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:36:51 by imatek            #+#    #+#             */
/*   Updated: 2024/05/26 15:59:04 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_is_charset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*new_s;

	i = 0;
	j = ft_strlen(s1);
	while (ft_is_charset(set, s1[i]) == 1)
		i++;
	while (j > i && ft_is_charset(set, s1[j - 1]) == 1)
		j--;
	new_s = malloc (sizeof(char) * (j - i + 1));
	if (!new_s)
		return (NULL);
	k = 0;
	while (i < j)
	{
		new_s[k] = s1[i];
		i++;
		k++;
	}
	new_s[k] = '\0';
	return (new_s);
}
/*int	main()
{
	__builtin_printf("%s", ft_strtrim("  .jfesf s. kdf  ", " ."));
	return (0);
}*/
