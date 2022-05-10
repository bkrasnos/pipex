/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:09:47 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:09:01 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*save;

	if (!lst || !f)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	if (!new_list)
		return (NULL);
	save = new_list;
	lst = lst->next;
	while (lst)
	{
		new_list->next = ft_lstnew(f(lst->content));
		if (!new_list->next)
		{
			ft_lstclear(&save, del);
			return (NULL);
		}
		new_list = new_list->next;
		lst = lst->next;
	}
	return (save);
}

// int	main(void)
// {
// 	int		ar[4];
// 	int		i;
// 	t_list	*head;
// 	t_list	*print;
// 	t_list	*new;

// 	i = 0;
// 	ar[0] = 11;
// 	ar[1] = 22;
// 	ar[2] = 33;
// 	ar[3] = 44;
// 	head = ft_lstnew((void *)&ar[0]);
// 	head->next = ft_lstnew((void *)&ar[1]);
// 	head->next->next = ft_lstnew((void *)&ar[2]);
// 	head->next->next->next = ft_lstnew((void *)&ar[3]);
// 	print = head;
// 	while (print)
// 	{
// 		printf("Content on p%d is equal to %d\n", i, *((int *)print->content));
// 		print = print->next;
// 		++i;
// 	}
// 	printf("Transofrming the content...\n");
// 	new = ft_lstmap(head, &ft_multiply_two, &del);
// 	i = 0;
// 	print = new;
// 	while (print)
// 	{
// 		printf("Content on p%d is equal to %d\n", i, *((int *)print->content));
// 		print = print->next;
// 		++i;
// 	}
// 	return (0);
// }