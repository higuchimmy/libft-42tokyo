/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:50:46 by thiguchi          #+#    #+#             */
/*   Updated: 2020/11/02 14:27:27 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;

	i = 0;
	if (!src)
		return (0);
	while (src[i] != '\0')
	{
		i++;
	}
	if (!dstsize)
		return (i);
	while (0 < dstsize - 1 && *src != '\0')
	{
		*dst++ = *src++;
		dstsize--;
	}
	*dst = '\0';
	return (i);
}
