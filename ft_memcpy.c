/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:57:01 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/27 10:47:17 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dt;
	unsigned char	*sc;
	
	dt = (unsigned char *)dest;
	sc = (unsigned char *)src;
	if (!dt && !sc)
		return (NULL);
	i = 0;
	while (i < n)
	{
		dt[i] = sc[i];
		i++;
	}
	return ((void *) dt);
}
/*
size_t ft_strlen(char *str)
        {
                size_t i = 0;
                while(str[i])
                        i++;
                return i++;
        }

#include <stdio.h>
int main() {
	char src[] = "zy\0xw\0vu\0\0tsr";
	char dest[50];
    
    // Copia o conteúdo de src para dest
	ft_memcpy(dest, src, ft_strlen(src) + 1); // +1 para incluir\
	 //  o caractere  nulo de terminação de string
    
    // Imprime o conteúdo copiado
	printf("Conteúdo copiado: %s\n", dest);
    
	return 0;
}*/
