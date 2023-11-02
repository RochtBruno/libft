/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:42:20 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/02 16:05:25 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*ptr;
	t_list	*node;
	//int	count_node;
	
	if (!f || !del)
		return (NULL);
	//count_node = ft_lstsize(lst);
	//node = malloc(sizeof(t_list) *count_node);
	while(lst)
	{
		ptr = ft_lstnew(f(lst->content));
		if (!ptr)
		{
			ft_lstclear(&node, del);
			return (node);
		}
		ft_lstadd_back(&node,ptr);
		lst = lst->next;
	}
	return (node);
}
