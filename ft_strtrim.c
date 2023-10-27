/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 14:27:12 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/25 17:33:31 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len_s1;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len_s1 = ft_strlen(s1) - 1;
	while (s1[len_s1] && ft_strchr(set, s1[len_s1]))
		len_s1--;
	str = ft_substr(s1, 0, len_s1 + 1);
	return (str);
}
/*#include <stdio.h>
int	main(void)
{
	char const s1[] = "casco camelo casco cachorro bumbum          ocsac";
	char const set[] = "ocsac";
	printf("%s\n", ft_strtrim(s1,set));
}*/
