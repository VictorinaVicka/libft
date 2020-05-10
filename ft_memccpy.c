/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 15:59:10 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 16:15:01 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char *)destination;
	src = (unsigned char *)source;
	while (n--)
	{
		*dst = *src;
		if (*dst == (char)c)
			return(dst + 1);
		dst++;
		src++;
	}
	return (NULL);
}
