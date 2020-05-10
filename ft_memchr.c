/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:15:23 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 19:23:38 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*src;
	size_t			index;

	index = 0;
	src = (unsigned char *)arr;
	while (src[index] != (unsigned char)c && index < n)
		index++;
	if (index == n)
		return (NULL);
	return ((void *)&src[index]);
}
