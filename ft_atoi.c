/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 23:49:45 by thiguchi          #+#    #+#             */
/*   Updated: 2020/11/02 23:53:20 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int			negative;
	long long	ans;

	ans = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		negative = (*str == '-') ? -1 : 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		ans *= 10;
		ans = (negative == -1) ? ans - (*str - '0') : ans + (*str - '0');
		str++;
	}
	return (ans);
}
