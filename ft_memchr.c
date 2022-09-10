/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 23:46:27 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/30 00:00:31 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char) c)
			return ((void *)s + index);
		index++;
	}
	return (NULL);
}
