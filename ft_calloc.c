/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:56:56 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/23 16:45:20 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char			*arr;
	unsigned int	i;
	unsigned int	total;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	arr = malloc(total);
	if (!arr)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		arr[i] = 0;
		i++;
	}
	return ((void *)arr);
}
/*#include <stdio.h>
 int main() {
    int num_elements = 5;
    int element_size = sizeof(int);

    int *array = (int *)ft_calloc(num_elements, element_size);

    if (array != NULL) {
        // A memória foi alocada com sucesso
        for (int i = 0; i < num_elements; ++i) {
	        printf("array[%d] = %d\n", i, array[i]);
        }
        free(array);
    } else {
        // A alocação de memória falhou
        printf("Erro ao alocar memória.\n");
    }

    return 0;
}*/
