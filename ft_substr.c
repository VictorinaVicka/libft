/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 20:29:24 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/09 20:29:27 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	index;
	size_t	index2;
	size_t	new_len;

	index = start;
	index2 = 0;
	if (!s)
		return (NULL);
	new_len = ft_strlen(s);
	if (!(d = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (start < new_len)
	{
		while (index < start + len && s[index] != '\0')
		{
			d[index2] = s[index];
			index++;
			index2++;
		}
	}
	d[index2] = '\0';
	return (d);
}
