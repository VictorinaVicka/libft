/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 10:45:03 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/12 10:08:37 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	sign;
	size_t	value;
	int		i;

	i = 0;
	sign = 1;
	value = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' ||
	*str == '\f' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		value = 10 * value;
		value = value + (*str - '0');
		str++;
	}
	if (i > 19 || value >= 9223372036854775808ULL)
		return (value = (sign == 1) ? -1 : 0);
	return (value * sign);
}
