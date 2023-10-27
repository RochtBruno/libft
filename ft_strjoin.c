/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:39:21 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/23 14:39:08 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	index_s1;
	size_t	index_s2;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	str = malloc(sizeof (char) * (len_s1 + len_s2) + 1);
	if (!str)
		return (NULL);
	index_s1 = 0;
	index_s2 = 0;
	while (s1[index_s1])
	{
		str[index_s1] = s1[index_s1];
		index_s1++;
	}
	while (s2[index_s2])
	{
		str[index_s1 + index_s2] = s2[index_s2];
		index_s2++;
	}
	str[index_s1 + index_s2] = '\0';
	return (str);
}
/*include <stdio.h>
int main(void)
{
	char t[] = "biscoito";
	char s[] = "da vaquinha";
	printf("%s\n",ft_strjoin(t,s));
}*/
