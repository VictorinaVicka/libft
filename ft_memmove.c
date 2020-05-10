/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:27:26 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 19:10:13 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (n > 0)
		{
			*(dst + n - 1) = *(src + n - 1);
			n--;
		}
	}
	else
		while (n > 0)
		{
			*dst = *src;
			dst++;
			src++;
			n--;
		}
	return (destination);
}
