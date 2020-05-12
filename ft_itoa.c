/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 15:58:06 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/12 11:43:13 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(long a)
{
	size_t	l;

	l = 1;
	if (a < 0)
	{
		l++;
		a = -a;
	}
	while (a >= 10)
	{
		a /= 10;
		l++;
	}
	return (l);
}

char		*ft_itoa(int n)
{
	size_t	o;
	char	*resu;
	size_t	len;
	long	a;

	o = 0;
	a = n;
	len = size(a);
	if (!(resu = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (a < 0)
	{
		a = -a;
		resu[0] = '-';
		o = 1;
	}
	resu[len] = '\0';
	while ((len - o) > 0)
	{
		resu[len - 1] = a % 10 + '0';
		a /= 10;
		len--;
	}
	return (resu);
}
