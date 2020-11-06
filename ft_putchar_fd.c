/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thiguchi <thiguchi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 19:09:59 by thiguchi          #+#    #+#             */
/*   Updated: 2020/10/30 13:22:42 by thiguchi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char chr;

	if ((unsigned char)c < X8)
	{
		write(fd, &c, 1);
	}
	else
	{
		chr = X8 + X7 + (unsigned char)c / X7;
		write(fd, &chr, 1);
		chr = X8 + (unsigned char)c % X7;
		write(fd, &chr, 1);
	}
}
