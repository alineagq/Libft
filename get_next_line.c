/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqueiroz <aqueiroz@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 23:46:38 by coder             #+#    #+#             */
/*   Updated: 2023/01/08 03:15:49 by aqueiroz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*alloc_buffer(int fd, char *buffer)
{
	char	*alloc;
	size_t	bytes;

	alloc = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!alloc)
		return (NULL);
	bytes = 1;
	while (!ft_strchr(buffer, '\n'))
	{
		bytes = read(fd, alloc, BUFFER_SIZE);
		if (bytes <= 0)
			break ;
		alloc[bytes] = '\0';
		buffer = ft_strjoin(buffer, alloc);
		if (!buffer)
		{
			free(alloc);
			return (NULL);
		}
	}
	free(alloc);
	return (buffer);
}

char	*alloc_line(char *buffer)
{
	char	*line;
	size_t	len;

	len = 0;
	if (!buffer[len])
		return (NULL);
	while (buffer[len] && buffer[len] != '\n')
		len++;
	if (buffer[len] == '\n')
		len++;
	line = malloc(sizeof(char) * (len + 1));
	if (!line)
		return (NULL);
	len = 0;
	while (buffer[len] && buffer[len] != '\n')
	{
		line[len] = buffer[len];
		len++;
	}
	if (buffer[len] == '\n')
		line[len++] = '\n';
	line[len] = '\0';
	return (line);
}

char	*update_buffer(char *buffer)
{
	char	*new;
	size_t	len;

	len = 0;
	while (buffer[len] && buffer[len] != '\n')
		len++;
	if (!buffer[len])
	{
		free(buffer);
		return (NULL);
	}
	new = malloc(sizeof(char) * (ft_strlen(buffer) - len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, &buffer[len + 1], (ft_strlen(&buffer[len + 1]) + 1));
	free(buffer);
	return (new);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0))
		return (NULL);
	buffer = alloc_buffer(fd, buffer);
	if (!buffer)
		return (NULL);
	line = alloc_line(buffer);
	buffer = update_buffer(buffer);
	return (line);
}
