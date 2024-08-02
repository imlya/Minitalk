/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:48:49 by imatek            #+#    #+#             */
/*   Updated: 2024/06/10 10:48:13 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *stash, char *buf)
{
	int		i;
	int		j;
	int		len;
	char	*join;

	i = -1;
	j = 0;
	len = ft_strlen(buf) + ft_strlen(stash);
	join = ft_calloc(len + 1, sizeof(char));
	if (!join)
		return (NULL);
	while (stash && stash[++i])
	{
		join[j] = stash[i];
		j++;
	}
	i = -1;
	while (buf[++i])
	{
		join[j] = buf[i];
		j++;
	}
	join[j] = '\0';
	free (stash);
	return (join);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	sum;
	size_t	i;

	if (nmemb != 0 && nmemb * size / nmemb != size)
		return (NULL);
	sum = nmemb * size;
	str = malloc(sum);
	if (!str)
		return (NULL);
	i = 0;
	while (i < sum)
		str[i++] = '\0';
	return (str);
}
