/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:45:16 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/01 14:44:28 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while(lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	t_list	*ptr;
	t_list	*ptr2;
	t_list	*ptr3;
	ptr = ft_lstnew((void*)45);
	ptr2 = ft_lstnew((void*)12);
	ptr3 = ft_lstnew((void*)43);
	ptr->next = ptr2;
	ptr2->next = ptr3;
	printf("%d\n",ft_lstsize(ptr3));
	return (0);
}*/
