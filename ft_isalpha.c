/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 11:11:59 by tfarenga          #+#    #+#             */
/*   Updated: 2020/05/10 11:25:07 by tfarenga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int ch)
{
	return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}