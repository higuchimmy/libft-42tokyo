/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 12:31:39 by thiguchi          #+#    #+#             */
/*   Updated: 2020/10/30 12:23:17 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return (char *)haystack;
	while (haystack[j] != '\0' && j < len)
	{
		if (haystack[j] == needle[i])
		{
			while (haystack[j + i] == needle[i] && j + i < len)
			{
				i++;
				if (needle[i] == '\0')
					return (char *)&haystack[j];
			}
		}
		j++;
		i = 0;
	}
	return (0);
}
