/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 11:04:09 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/06/28 15:47:57 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	val;

	p = ptr;
	val = (unsigned char)value;
	while (num-- > 0)
		*p++ = val;
	return (ptr);
}
