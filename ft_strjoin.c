/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 02:04:49 by aqueiroz          #+#    #+#             */
/*   Updated: 2023/01/08 03:19:10 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = 0;
	len_s2 = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	if (s1)
	{
		while (s1[len_s1])
		{
			ptr[len_s1] = s1[len_s1];
			len_s1++;
		}
	}
	while (s2[len_s2])
	{
		ptr[len_s1 + len_s2] = s2[len_s2];
		len_s2++;
	}
	ptr[len_s1 + len_s2] = '\0';
	free(s1);
	return (ptr);
}
