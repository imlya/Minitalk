/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:50:58 by imatek            #+#    #+#             */
/*   Updated: 2024/07/30 19:02:48 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read(int fd, char *stash)
{
	char	*buf;
	int		nb_read;

	nb_read = 1;
	buf = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buf)
		return (NULL);
	while (nb_read != 0 && (!(ft_strchr(buf, '\n'))))
	{
		nb_read = read(fd, buf, BUFFER_SIZE);
		if (nb_read == -1)
		{
			if (stash)
				free(stash);
			return (free(buf), NULL);
		}
		buf[nb_read] = '\0';
		stash = ft_strjoin_free(stash, buf);
		if (!stash)
			return (free(buf), NULL);
	}
	free(buf);
	if (!nb_read && !stash[0])
		return (free(stash), NULL);
	return (stash);
}

char	*ft_get_line(char *stash)
{
	size_t	i;
	char	*dest;

	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	dest = ft_calloc((i + 2), sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
	{
		dest[i] = stash[i];
		i++;
	}
	if (stash[i] == '\n')
	{
		dest[i] = stash[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_new(char *stash)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (!stash)
		return (NULL);
	i = 0;
	while (stash[i] && stash[i] != '\n')
		i++;
	dest = ft_calloc((ft_strlen(stash) - i + 1), sizeof(char));
	if (!dest)
		return (NULL);
	if (stash[i])
		i++;
	j = 0;
	while (stash[i])
	{
		dest[j] = stash[i++];
		j++;
	}
	dest[j] = '\0';
	free(stash);
	return (dest);
}

char	*get_next_line(int fd, int error)
{
	char		*line;
	static char	*stash;

	if (fd < 0 || BUFFER_SIZE == 0)
		return (NULL);
	if (error)
		return (free(stash), NULL);
	stash = ft_read(fd, stash);
	if (!stash)
		return (NULL);
	line = ft_get_line(stash);
	stash = ft_new(stash);
	return (line);
}

// int	main(void)
// {
// 	int		fd;
// 	char	*res;
// 	int		i;

// 	i = 1;
// 	fd = open("file.txt", O_RDONLY);
// 	res = get_next_line(fd);
// 	printf("line %d: %s\n", i++, res);
// 	while (res)
// 	{
// 		free(res);
// 		res = get_next_line(fd);
// 		printf("line %d: %s\n", i, res);
// 		i++;
// 	}
// 	free(res);
// 	return (0);
// }
