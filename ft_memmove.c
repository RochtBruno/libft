/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:18:12 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/20 15:09:31 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ds;
	unsigned char		*sc;

	if (!dest && !src)
		return (NULL);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	ds = (unsigned char *)dest;
	sc = (unsigned char *)src;
	while (n > 0)
	{
		ds[n - 1] = sc[n - 1];
		n--;
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int main() {
    char buffer[50] = "Hello, World!";
    char buffer2[50] = "Hello, World!";

    // Move os últimos 7 caracteres para o início do buffer
    memmove(buffer, buffer + 7, 7);
    ft_memmove(buffer2, buffer2 + 7, 7);

    // Imprime o conteúdo movido
    printf("Conteúdo movido: %s\n", buffer);
    printf("Conteúdo movido: %s\n", buffer2);

    return 0;
}*/
