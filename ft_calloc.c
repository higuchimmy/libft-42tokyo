/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:00:36 by thiguchi          #+#    #+#             */
/*   Updated: 2020/10/29 03:31:24 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;
	size_t	i;

	i = 0;
	if (!(dst = (char *)malloc(sizeof(char) * count * size)))
		return (0);
	while (i < size * count)
	{
		dst[i] = 0;
		i++;
	}
	return ((void *)dst);
}
