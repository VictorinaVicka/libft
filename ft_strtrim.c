/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 20:30:45 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/09 20:30:53 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		index;
	int		len;
	int		first;

	index = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (len > 0 && is_set(s1[len - 1], set))
		len--;
	first = 0;
	while (first < len && is_set(s1[first], set))
		first++;
	if (!(str = (char *)malloc(sizeof(char) * (len - first + 1))))
		return (NULL);
	index = 0;
	while (index < len - first)
	{
		str[index] = s1[first + index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("kzjdfv jdf as", "as"));
// 	return (0);
// }