/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:41:29 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/20 10:19:19 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dstr;

	dstr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		dstr[i] = (unsigned char)c;
		i++;
	}
	return ((void *)dstr);
}
/*
#include <stdio.h>
 * int main(void)
{
	char buffer[10]; // Um array de 10 caracteres
    
    // Preencher o buffer com o valor 'A' usando memset
    ft_memset(buffer, 'A', sizeof(buffer));
    
    // Imprimir o conteúdo do buffer
    for (int i = 0; i < sizeof(buffer); i++) {
        printf("%c ", buffer[i]);
    }
    
    return 0;
}*/
