/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 18:09:13 by imatek            #+#    #+#             */
/*   Updated: 2024/06/08 20:06:25 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*lst_bis;

	lst_bis = *lst;
	while (lst_bis)
	{
		temp = lst_bis->next;
		ft_lstdelone(lst_bis, del);
		lst_bis = temp;
	}
	*lst = NULL;
}
