/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 11:55:03 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 12:34:02 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*resu;
	size_t	run;
	size_t	index;
	size_t	limit;
	size_t	mch;

	index = 0;
	resu = (char *)big;
	run = ft_strlen(little);
	if (run == 0)
		return (resu);
	if (len < (limit = ft_strlen(big)))
		limit = len;
	while (limit >= index + run)
	{
		mch = 0;
		while (little[mch] == resu[index + mch])
		{
			if (mch == run - 1)
				return (resu + index);
			mch++;
		}
		index++;
	}
	return (NULL);
}
