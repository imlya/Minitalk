/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:09:32 by imatek            #+#    #+#             */
/*   Updated: 2024/05/27 20:52:38 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int		i;
	t_list	*temp;

	temp = lst;
	i = 0;
	if (temp == NULL)
		return (NULL);
	while (temp->next != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
