/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:34:12 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/27 11:01:54 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*str;

	str = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == x)
			return ((void *)str + i);
		i++;
	}
	if (str[i] == x && i < n)
		return ((void *)str + i);
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
 int main() {
    const char str[] = "Hello, World!";
    char searchChar = 'd';
    size_t strLength = ft_strlen(str);

    // Chamando a sua função ft_memchr
    const char *result = (const char *)ft_memchr(str, searchChar, strLength);

    if (result != NULL) {
        printf("Caractere encontrado na posição: %ld\n", result - str);
    } else {
        printf("Caractere não encontrado na string.\n");
    }

    return 0;
}*/
