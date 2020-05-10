/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 13:09:33 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 13:17:33 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == (char)ch)
			return ((char *)&str[index]);
		index++;
	}
	if (str[index] == (char)ch)
		return ((char *)&str[index]);
	return (NULL);
}
