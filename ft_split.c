/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:05:52 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/26 19:35:23 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_words(char *str, char sep)
{
	size_t	count_word;

	if (!str)
		return (0);
	count_word = 0;
	while (*str)
	{
		while (*str == sep)
			str++;
		if (*str)
		{
			count_word++;
			while (*str && *str != sep)
				str++;
		}
	}
	return (count_word);
}

static	char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while ((src[count] != '\0') && (count < n))
	{
		dest[count] = src[count];
		count ++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	size_t	i_word;
	size_t	len_word;
	char	*start;
	char	**ptr;

	ptr = malloc(sizeof(char *) * (get_words((char *)s, c) + 1));
	if (!ptr || !s)
		return (NULL);
	i_word = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			len_word = s - start;
			ptr[i_word] = malloc(len_word + 1);
			ft_strncpy(ptr[i_word], start, len_word);
			ptr[i_word++][len_word] = '\0';
		}
		s++;
	}
	ptr[i_word] = NULL;
	return (ptr);
}
/*#include <stdio.h>
int main(void) 
{
	char t[] = "----banana-ovo-macarrao-pao------banana--";
	char sep = '-';
	char **strings = ft_split(t,sep);
	int i = 0;
	printf("%ld\n",get_words(t,sep));
	while(strings[i])
	{
		printf("%s\n",strings[i]);
		free(strings[i]);
		i++;
	}
	free(strings);
	return (0);
}*/
