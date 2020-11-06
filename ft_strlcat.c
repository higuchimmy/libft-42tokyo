/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 15:39:25 by thiguchi          #+#    #+#             */
/*   Updated: 2020/11/02 14:28:38 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	else
	{
		while (src[i] != '\0' && i < dstsize - dst_len - 1)
		{
			dst[dst_len + i] = src[i];
			i++;
		}
	}
	dst[i + dst_len] = '\0';
	return (dst_len + src_len);
}
