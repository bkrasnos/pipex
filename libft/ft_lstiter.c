/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:09:22 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 09:45:37 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*position;

	if (!lst || !f)
		return ;
	position = lst;
	while (position != NULL)
	{
		(*f)(position->content);
		position = position->next;
	}
}

// int	main(void)
// {
// 	t_list	*head;
// 	int		n;

// 	n = 5;
// 	head = ft_lstnew((void *)&n);
// 	// head = NULL;
// 	ft_lstiter(head, NULL);
// 	return (0);
// }
