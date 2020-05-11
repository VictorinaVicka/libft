/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 15:58:06 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/11 16:32:11 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int a)
{
	size_t	digit;
	size_t	go;

	digit = 1;
	go = a / 10;
	while (go != 0)
	{
		go /= 10;
		digit++;
	}
	return (digit);
}

static int	ft_factor(int digit)
{
	size_t	resu;

	resu = 1;
	while (digit > 1)
	{
		digit--;
		resu *= 10;
	}
	return (resu);
}

static char	*result(char *resu, int a)
{
	size_t	index;
	size_t	digit;
	size_t	factor;

	index = 0;
	if (a < 0)
	{
		resu[index] = '-';
		index++;
		a = -a;
	}
	digit = size(a);
	factor = ft_factor(digit);
	while (digit > 0)
	{
		resu[index] = a / factor + 48;
		a %= factor;
		factor /= 10;
		index++;
		digit--;
	}
	resu[index] = '\0';
	return (resu);
}

char		*ft_itoa(int n)
{
	int		otr;
	char	*resu;

	otr = 0;
	if (n < 0)
		otr = 1;
	resu = NULL;
	if (!(resu = (char *)malloc(sizeof(char) * size(n) + otr + 1)))
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(resu, "-2147483648", 12);
		return (resu);
	}
	resu = result(resu, n);
	return (resu);
}
