/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 19:16:59 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/27 14:20:12 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_get_nbr_len(long int nbr)
{
	size_t	count_num;

	count_num = 1;
	if (nbr < 0)
		count_num++;
	while (nbr / 10)
	{
		count_num++;
		nbr /= 10;
	}
	return (count_num);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		index;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = malloc(sizeof(char) * (ft_get_nbr_len(n) + 1));
	index = ft_get_nbr_len(n);
	if (!str)
		return (NULL);
	str[index--] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n != 0)
	{
		str[index--] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
/*#include <stdio.h>

int	main(void)
{	
	//char	*res;
	int	x = -2147483648LL;
	//char *res = itoa(-2147483648LL);
	printf("%ld\n",get_nbr_len(x));
	printf("%s\n",ft_itoa(x));
	//ft_print_result(res);
}*/
