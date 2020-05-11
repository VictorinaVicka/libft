/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 20:05:48 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/11 15:54:21 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*skip_char(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static int			word_count(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0')
	{
		s = skip_char(s, c);
		if (*s != '\0')
		{
			i++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (i);
}

static int			next_len_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		i++;
	}
	return (i);
}

static char			**malloc_free(char **str)
{
	while (*str)
	{
		free(*str);
		str++;
	}
	free(str);
	return (NULL);
}

char				**ft_split(char const *s, char c)
{
	char	**rezu;
	int		index;
	int		len;
	int		count_word;

	if (!s)
		return (NULL);
	count_word = word_count(s, c);
	if (!(rezu = (char **)malloc(sizeof(char*) * (count_word + 1))))
		return (NULL);
	index = 0;
	while (index < count_word)
	{
		s = skip_char(s, c);
		len = next_len_word(s, c);
		if (!(rezu[index] = (char *)malloc(sizeof(char) * (len + 1))))
			return (malloc_free(rezu));
		ft_strlcpy(rezu[index], s, len + 1);
		s += len;
		index++;
	}
	rezu[index] = NULL;
	return (rezu);
}
