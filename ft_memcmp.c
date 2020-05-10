/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:27:55 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 19:39:15 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
	size_t			a;
	unsigned char	*str;
	unsigned char	*dst;

	a = 0;
	str = (unsigned char *)memptr1;
	dst = (unsigned char *)memptr2;
	while (a < num)
	{
		if (str[a] != dst[a])
			return (str[a] - dst[a]);
		a++;
	}
	return (0);
}
