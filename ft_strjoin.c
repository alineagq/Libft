/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 02:04:49 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/09/02 02:33:33 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = 0;
	len_s2 = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[len_s1])
	{
		ptr[len_s1] = s1[len_s1];
		len_s1++;
	}
	while (s2[len_s2])
	{
		ptr[len_s1 + len_s2] = s2[len_s2];
		len_s2++;
	}
	ptr[len_s1 + len_s2] = '\0';
	return (ptr);
}
