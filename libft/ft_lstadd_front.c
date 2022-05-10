/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:08:51 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:47:29 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		new->next = NULL;
		*lst = new;
	}
	else
	{
		new->next = *lst;
		*lst = new;
	}
}

// int	main(void)
// {
// 	int		array[3];
// 	int		i;
// 	t_list	*head;
// 	t_list	*current;
// 	t_list	*print;

// 	array[0] = 11;
// 	array[1] = 22;
// 	array[2] = 33;
// 	i = 0;
// 	head = ft_lstnew((void *)&array[0]);
// 	current = ft_lstnew((void *)&array[1]);
// 	head->next = current;
// 	current = ft_lstnew((void *)&array[2]);
// 	print = head;
// 	while (print != NULL)
// 	{
// 		printf("Content on p%d is equal to %d\n", i, *((int *)print->content));
// 		++i;
// 		print = print->next;
// 	}
// 	printf("Pushing a new element to the front...\n");
// 	ft_lstadd_front(&head, current);
// 	print = head;
// 	i = 0;
// 	while (print != NULL)
// 	{
// 		printf("Content on p%d is equal to %d\n", i, *((int *)print->content));
// 		++i;
// 		print = print->next;
// 	}
// 	return (0);
// }