/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:09:12 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:05:57 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

// void	ft_print(void *content)
// {
// 	printf("Content is %d\n", *((int *)content));
// }

// int	main(void)
// {
// 	int		ar[3];
// 	int		i;
// 	t_list	*head;
// 	t_list	*print;

// 	ar[0] = 11;
// 	ar[1] = 22;
// 	ar[2] = 33;
// 	i = 0;
// 	head = ft_lstnew((void *)&ar[0]);
// 	head->next = ft_lstnew((void *)&ar[1]);
// 	head->next->next = ft_lstnew((void *)&ar[2]);
// 	print = head;
// 	while (print)
// 	{
// 		printf("Content on p%d is equal to %d\n", i, *((int *)print->content));
// 		print = print->next;
// 		++i;
// 	}
// 	printf("Deleting one element...\n");
// 	ft_lstdelone(head->next, NULL);
// 	i = 0;
// 	print = head;
// 	while (print)
// 	{
// 		printf("Content on p%d is equal to %d\n", i, *((int *)print->content));
// 		print = print->next;
// 		++i;
// 	}
// 	return (0);
// }