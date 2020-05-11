/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 15:29:54 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/11 15:43:19 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*src;
	size_t	index;
	size_t	len;

	index = 0;
	src = NULL;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (!(src = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[index] != '\0')
	{
		src[index] = (*f)(index, s[index]);
		index++;
	}
	src[index] = '\0';
	return (src);
}
