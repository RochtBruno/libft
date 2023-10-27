/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:13:18 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/27 10:44:39 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	x;
	int		i;

	i = 0;
	x = (char) c;
	while (s[i] != '\0')
	{
		if (s[i] == x)
			return ((char *) s + i);
		i++;
	}
	if (s[i] == x)
		return ((char *) s + i);
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char t[] = "bon\0jour";
	printf("%s\n",ft_strchr(t,'\0'));
}*/
