/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:09:57 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/14 15:59:49 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!(new))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// int	main(void)
// {
// 	t_list	*head;
// 	t_list	*print;
// 	t_list	*new;
// 	int		i;
// 	int		ar[3] = {11, 22, 33};

// 	head = ft_lstnew((void *)&ar[0]);
// 	new = ft_lstnew((void *)&ar[1]);
// 	// head = NULL;
// 	// ft_lstadd_front(&head, new);
// 	ft_lstadd_front(&head, new);
// 	print = head;
// 	i = 0;
// 	while (print)
// 	{
// 		printf("%d\n", *(int *) print->content);
// 		print = print->next;
// 	}
// 	// printf("%d\n", *(int *) head->content);
// 	// printf("%d\n", *(int *) new->content);
// 	return (0);
// }
