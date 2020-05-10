/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 12:37:44 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 13:02:38 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	index;
	char	*last_oc;

	index = 0;
	last_oc = NULL;
	while (s[index] != '\0')
	{
		if (s[index] == (char)c)
			last_oc = (char *)&s[index];
		index++;
	}
	if (s[index] == (char)c)
		return ((char *)&s[index]);
	return (last_oc);
}
