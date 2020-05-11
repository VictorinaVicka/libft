/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:59:10 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/11 19:57:18 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	size_t			index;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char*)destination;
	src = (unsigned char*)source;
	index = 0;
	while (index < n && src[index] != (unsigned char)c)
	{
		dst[index] = src[index];
		index++;
	}
	if (index == n)
		return (NULL);
	else
	{
		dst[index] = src[index];
		index++;
		return (&dst[index]);
	}
}
