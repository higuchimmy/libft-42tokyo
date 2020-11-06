/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 22:42:26 by thiguchi          #+#    #+#             */
/*   Updated: 2020/10/30 12:12:15 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (dst < src)
		while (len)
		{
			*s1++ = *s2++;
			len--;
		}
	else
	{
		s1 += len - 1;
		s2 += len - 1;
		while (len)
		{
			*s1-- = *s2--;
			len--;
		}
	}
	return (dst);
}
