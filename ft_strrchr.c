/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:39:57 by btaveira          #+#    #+#             */
/*   Updated: 2023/11/01 11:48:53 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	x;

	i = 0;
	x = (char)c;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == x)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	const char t[] = "abdfbff";
	printf("%s\n",ft_strrchr(t,'b'));
}*/
