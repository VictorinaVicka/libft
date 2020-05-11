/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:15:23 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/11 20:05:51 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	const char	*src;

	src = arr;
	while (n > 0)
	{
		if (*src == (char)c)
			return ((void *)src);
		src++;
		n--;
	}
	return (NULL);
}
