/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 00:24:17 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/08/31 16:55:18 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	res;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize > dst_len)
	{
		res = (src_len + dst_len);
		while (src[i] && (dst_len + 1) < dstsize)
		{
			dst[dst_len] = ((char *)src)[i];
			i++;
			dst_len++;
		}
		dst[dst_len] = '\0';
	}
	else
	{
		res = src_len + dstsize;
	}
	return (res);
}
