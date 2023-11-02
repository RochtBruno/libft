/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:26:41 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/01 18:09:08 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*ptr;
	
	if(lst != NULL)
	{
		if(*lst == NULL)
			*lst = new;
		else
		{
			ptr = ft_lstlast(*lst);
			ptr->next = new;
		}
	}	
}
