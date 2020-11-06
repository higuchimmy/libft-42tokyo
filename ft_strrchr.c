/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/11 08:37:57 by thiguchi          #+#    #+#             */
/*   Updated: 2020/10/30 13:26:14 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *p;

	p = NULL;
	c = (char)c;
	while (*s != '\0')
	{
		if (*s == c)
		{
			p = (char *)s;
		}
		s++;
	}
	if (*s == '\0' && c == '\0')
		return (char *)s;
	return (p);
}
