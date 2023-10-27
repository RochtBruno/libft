/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:23:29 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/23 09:32:13 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	i;

	len_dest = ft_strlen(dest);
	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (size < ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[i] && (i + len_dest) < size - 1)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + ft_strlen(src));
}
/*#include <stdio.h>
int	main(void)
{
//	char t[0] = '\0';
	char t[11] = "a";
	char s[] = "lorem";
	printf("%zu\n",ft_strlcat(t,s,15));
	printf("%s\n",t);
	//printf("%zu\n",strlcat(t,s,15));
	//printf("%s\n",ft_
}*/
