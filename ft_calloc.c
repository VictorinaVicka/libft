/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 13:38:49 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/11 13:43:45 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void *str;

	str = (void*)malloc(num * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, num * size);
	return (str);
}
