/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:31:32 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/27 10:02:38 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
/*

#include <stdio.h>
#include <string.h>
   int main() {
    const char *src = "Hello, World!";
    char dest[20]; // buffer de destino com tamanho suficiente

    size_t len = ft_strlcpy(dest, src, sizeof(dest));

    // Imprime o conteúdo copiado e o comprimento da string original
    printf("Conteúdo copiado: %s\n", dest);
    printf("Comprimento da string original: %zu\n", len);

    return 0;
}*/
