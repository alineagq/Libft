/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 21:48:55 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/09/01 22:09:45 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_all(unsigned int num, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = -n;
		ft_all(num, fd);
	}
	else
		ft_all(n, fd);
}

static void	ft_all(unsigned int num, int fd)
{
	if (num >= 10)
	{
		ft_all(num / 10, fd);
	}
	ft_putchar_fd(num % 10 + '0', fd);
}
