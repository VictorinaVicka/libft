/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 13:23:06 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/12 11:13:22 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t index;

	index = 0;
	if (src && !dst)
		return (ft_strlen(src));
	else if (!dst && !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	while (index < (size - 1) && src[index] != '\0')
	{
		dst[index] = src[index];
		++index;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}
