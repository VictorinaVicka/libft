/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 13:34:25 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 14:35:55 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		index;
	size_t		len_dst;
	size_t		len_src;

	index = 0;
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	while ((dst[index] != '\0') && index < (size - 1))
		index++;
	while (*src && index < (size - 1))
	{
		dst[index] = *src;
		index++;
		src++;
	}
	dst[index] = '\0';
	return (len_dst + len_src);
}
