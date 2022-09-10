/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:28:34 by aqueiroz          #+#    #+#             */
/*   Updated: 2022/09/03 20:33:50 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		position;
	int		lenght;
	char	*dest;

	lenght = ft_strlen(s1);
	dest = (char *)malloc(sizeof(char) * (lenght + 1));
	position = 0;
	while (position < lenght)
	{
		dest[position] = s1[position];
		position++;
	}
	dest[position] = '\0';
	return (dest);
}
