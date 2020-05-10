/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 11:43:40 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 11:50:13 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int a;

	a = 0;
	if (n == 0)
	{
		return (0);
	}
	while (a < (n - 1) && str1[a] != '\0' && str1[a] == str2[a])
	{
		a++;
	}
	return ((unsigned char)str1[a] - (unsigned char)str2[a]);
}
