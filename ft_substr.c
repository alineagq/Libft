/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 23:55:03 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/09/11 20:04:14 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		len = 0;
		start = ft_strlen(s);
	}
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, (s + start), len + 1);
	return (ptr);
}
