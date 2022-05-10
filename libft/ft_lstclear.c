/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:09:02 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/14 16:04:43 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*position;

	if (!lst)
		return ;
	while (*lst != NULL)
	{
		position = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = position;
	}
}

// int	main(void)
// {
// 	t_list	*head;
// 	int		n;

// 	n = 5;
// 	head = ft_lstnew((void *)&n);
// 	// head = NULL;
// 	ft_lstclear(&head, NULL);
// 	return (0);
// }
