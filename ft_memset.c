/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 00:51:07 by thiguchi          #+#    #+#             */
/*   Updated: 2020/10/30 13:22:55 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char i;
	unsigned char *tmp;

	i = c;
	tmp = (unsigned char *)b;
	while (0 < len)
	{
		*tmp++ = i;
		len--;
	}
	return (b);
}
