/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 09:51:12 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/02 14:41:24 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list  *ptr;

	while (*lst != NULL)
	{
		ptr = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = ptr;
	}
	(*lst) = NULL;
}
