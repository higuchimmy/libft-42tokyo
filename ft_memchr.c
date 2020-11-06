/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/09 23:15:58 by thiguchi          #+#    #+#             */
/*   Updated: 2020/10/30 13:36:44 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *b;
	unsigned char i;

	b = (unsigned char *)s;
	i = (unsigned char)c;
	while (0 < n)
	{
		if (*b == i)
		{
			return (b);
		}
		b++;
		n--;
	}
	return (0);
}
