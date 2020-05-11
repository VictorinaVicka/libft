/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/11 15:10:21 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/11 15:26:15 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index1;
	size_t	index2;
	size_t	len_s1;
	size_t	len_s2;
	char	*str;

	index1 = 0;
	index2 = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	if (!(str = malloc(sizeof(char) * (len_s1 + len_s2 + 1))))
		return (NULL);
	while (s1[index1])
		str[index1++] = s1[index2++];
	index2 = 0;
	while (s2[index2])
		str[index1++] = s2[index2++];
	str[index1] = '\0';
	return (str);
}
