/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:31:09 by imatek            #+#    #+#             */
/*   Updated: 2024/06/06 12:52:14 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] && s[i] != c)
			i++;
		count++;
	}
	return (count);
}

int	ft_strlen_word(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_free(char **result, int index)
{
	while (index >= 0)
	{
		free(result[index]);
		index--;
	}
	free(result);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	int		len_word;
	char	**result;
	int		index;

	count = (ft_count_word(s, c));
	result = malloc((count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	index = 0;
	while (index != count)
	{
		while (s[i] == c)
			i++;
		len_word = ft_strlen_word(&s[i], c);
		result[index] = ft_substr(s, i, len_word);
		if (result[index] == NULL)
			return (ft_free(result, index));
		i += len_word;
		index++;
	}
	result[index] = NULL;
	return (result);
}

/*s = salut ca va 
c = " "
count_word
len_word = ft_strlen(s)
ft_strchr pour avoir la premiere occurence
et l'utiliser dans ft_substr + len_word

int	main()
{
	//ft_count_word("salut   ca va bien  ", ' ');
	__builtin_printf("%s", (char *)ft_split(" salut   ca va bien  ", ' '));
	return (0);
}*/