/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 14:58:45 by thiguchi          #+#    #+#             */
/*   Updated: 2020/11/02 01:33:46 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_charset(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static char		*next_str(const char *str, char charset)
{
	while (*str && !check_charset(*str, charset))
		str++;
	while (*str && check_charset(*str, charset))
		str++;
	return ((char *)str);
}

static int		count_str(const char *str, char charset)
{
	int size;

	size = 0;
	if (!str)
		return (0);
	while (*str)
	{
		str = next_str(str, charset);
		size++;
	}
	return (size);
}

static char		**do_split(char **ans, const char *str, int size, char charset)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[j] && !check_charset(str[j], charset))
			j++;
		if (!(ans[i] = (char *)malloc(sizeof(char) * (j + 1))))
		{
			while (0 < i)
				free(ans[i--]);
			return (0);
		}
		j = 0;
		while (str[j] && !check_charset(str[j], charset))
		{
			ans[i][j] = str[j];
			j++;
		}
		ans[i++][j] = 0;
		str = next_str(str, charset);
	}
	return (ans);
}

char			**ft_split(char const *s, char c)
{
	int		size;
	char	**ans;

	if (!s && c != '\0')
		return (0);
	while (*s && check_charset(*s, c))
		s++;
	size = count_str(s, c);
	if (!(ans = (char **)malloc(sizeof(char *) * (size + 1))))
	{
		return (0);
	}
	do_split(ans, s, size, c);
	ans[size] = NULL;
	return (ans);
}
