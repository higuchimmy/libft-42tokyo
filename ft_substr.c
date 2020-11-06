/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/12 18:35:22 by thiguchi          #+#    #+#             */
/*   Updated: 2020/11/02 14:30:46 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	n;
	char			*dst;

	if (!s)
		return (0);
	if (len == 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	else
	{
		n = ft_strlen(&s[start]);
		if (n < len)
			len = n;
		if (!(dst = (char *)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		i = 0;
		while (s[i] && i < len)
		{
			dst[i] = s[i + start];
			i++;
		}
		dst[i] = '\0';
		return (dst);
	}
}
