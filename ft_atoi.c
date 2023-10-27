/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btaveira <btaveira@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 09:16:01 by btaveira          #+#    #+#             */
/*   Updated: 2023/10/19 16:26:51 by btaveira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	signal;

	i = 0;
	res = 0;
	signal = 1;
	if (*nptr == '\0')
		return (0);
	while (nptr[i] == ' ' || (nptr[i] >= 7 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + (nptr[i] - 48);
		i++;
	}
	return (res * signal);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("manual: %d\n",atoi("+-54"));
	printf("meu atoi %d\n",ft_atoi("+-54"));
}

#include <stdio.h>
int main(int argc, const char *argv[])
{
        int             arg;

        alarm(5);
        if (argc == 1)
                return (0);
        else if ((arg = atoi(argv[1])) == 1)
                printf(ft_atoi("0"));
        else if (arg == 2)
                printf(ft_atoi("546:5"));
        else if (arg == 3)
                printf(ft_atoi("-4886"));
        else if (arg == 4)
                printf(ft_atoi("+548"));
        else if (arg == 5)
                printf(ft_atoi("054854"));
        else if (arg == 6)
                printf(ft_atoi("000074"));
        else if (arg == 7)
                printf(ft_atoi("+-54"));
        else if (arg == 8)
                printf(ft_atoi("-+48"));
        else if (arg == 9)
                printf(ft_atoi("--47"));
        else if (arg == 10)
                printf(ft_atoi("++47"));
        else if (arg == 11)
                printf(ft_atoi("+47+5"));
        else if (arg == 12)
                printf(ft_atoi("-47-5"));
        else if (arg == 13)
                printf(ft_atoi("\e475"));
        else if (arg == 14)
                printf(ft_atoi("\t\n\r\v\f  469 \n"));
        else if (arg == 15)
                printf(ft_atoi("-2147483648"));
        else if (arg == 16)
                printf(ft_atoi("2147483647"));
        else if (arg == 17)
                printf(ft_atoi("\t\n\r\v\fd469 \n"));
        else if (arg == 18)
                printf(ft_atoi("\n\n\n  -46\b9 \n5d6"));
        else if (arg == 19)
                printf(ft_atoi(""));
        return (0);
}*/
