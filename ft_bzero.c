/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:30:42 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/20 10:13:01 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ds;

	ds = (char *)s;
	i = 0;
	while (i < n)
	{
		ds[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int main() {
    char buffer[100];

    // Inicializa o buffer com zeros usando bzero
    ft_bzero(buffer, sizeof(buffer));

    // Agora o buffer contém zeros em todas as posições de memória

    return 0;
}*/
