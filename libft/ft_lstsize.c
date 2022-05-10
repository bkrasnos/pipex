/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:10:06 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 10:08:55 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		idx;
	t_list	*position;

	idx = 0;
	position = lst;
	while (position != NULL)
	{
		position = position->next;
		idx++;
	}
	return (idx);
}

// int	main(void)
// {
// 	int		*data;
// 	t_list	*head;

// 	if (!(data = (int *)malloc(sizeof(int)*4)))
// 		return (0);
// 	data[0] = 11;
// 	data[1] = 22;
// 	data[2] = 33;
// 	data[3] = 44;
// 	head = ft_lstnew((void *)&data[0]);
// 	head->next = ft_lstnew((void *)&data[1]);
// 	head->next->next = ft_lstnew((void *)&data[2]);
// 	head->next->next->next = ft_lstnew((void *)&data[3]);
// 	printf("Lst size is %d.\n", ft_lstsize(head));
// 	return (0);
// }