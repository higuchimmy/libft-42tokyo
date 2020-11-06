/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 14:56:49 by thiguchi          #+#    #+#             */
/*   Updated: 2020/11/01 00:41:55 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	n;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (*s1 == '\0')
	{
		dst = ft_strdup((char *)s1);
		return (dst);
	}
	n = ft_strlen(s1);
	while (n && ft_strchr(set, s1[n]))
		n--;
	dst = ft_substr((char *)s1, 0, n + 1);
	return (dst);
}
