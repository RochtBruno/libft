/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:20:28 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/20 11:26:32 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < (n - 1))
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i] - str2[i]));
		i++;
	}
	return ((int)(str1[i] - str2[i]));
}
/*#include <stdio.h>
 #include <string.h>
int	main(void)
{
	char t[] = "vaca";
	char s[] = "vata";
	printf("minha função: %d\n",ft_memcmp("t\200", "t\0", 2));
	printf("manual: %d\n",memcmp("t\200", "t\0", 2));
	printf("minha função: %d\n",ft_memcmp("testss", "test", 5));
        printf("manual: %d\n",memcmp("testss", "test", 5));
}*/
