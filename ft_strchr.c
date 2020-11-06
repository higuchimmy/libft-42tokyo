/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 13:41:18 by thiguchi          #+#    #+#             */
/*   Updated: 2020/10/30 13:37:13 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char i;

	i = (char)c;
	while (*s != '\0')
	{
		if (*s == i)
		{
			return (char *)s;
		}
		s++;
	}
	if (i == '\0' && *s == '\0')
	{
		return (char *)s;
	}
	return (0);
}
