/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:04:12 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/19 15:04:23 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return (((unsigned char)str1[i]) -((unsigned char)str2[i]));
		i++;
	}
	return (0);
}
/*
 * #include <stdio.h>
 * #include <string.h>
int main (void)
{
	printf("%d\n",strncmp("vata","vaca",3));
	printf("%d\n",ft_strncmp("vata","vaca",3));
}*/
