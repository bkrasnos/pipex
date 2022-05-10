/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkrasnos <bkrasnos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 11:35:42 by bkrasnos          #+#    #+#             */
/*   Updated: 2022/04/15 09:56:52 by bkrasnos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbrs(long n, char *str, int *i)
{
	if (n > 9)
	{
		ft_putnbrs(n / 10, str, i);
		ft_putnbrs(n % 10, str, i);
	}
	else
	{
		str[(*i)] = n + '0';
		++(*i);
	}
}

size_t	ft_nbrlen(long long n)
{
	size_t	i;

	i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	long	nbr;

	nbr = n;
	str = malloc(sizeof(char) * (ft_nbrlen(nbr) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (nbr < 0)
	{
		str[i] = '-';
		nbr *= -1;
		i++;
	}
	ft_putnbrs(nbr, str, &i);
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	int	n;

// 	n = 0;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = 1;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = 1592;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = 100;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = 2147483647;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = -1;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = -2000;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = -123;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	n = -2147483648;
// 	printf("n is %d, itoa is %s\n", n, ft_itoa(n));
// 	return (0);
// }