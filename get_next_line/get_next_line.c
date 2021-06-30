/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 08:31:29 by wding-ha          #+#    #+#             */
/*   Updated: 2021/06/30 14:19:17 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	freestr(char *str)
{
	if (str != NULL)
	{
		free(str);
		str = NULL;
	}
}

int	processline(char *save, char **line)
{
	int		len;
	char	*hold;

	len = 0;
	while (save[len] && save[len] != '\n')
		len++;
	if (save[len] == '\n')
	{
		*line = ft_substr(save, 0, len);
		hold = ft_strdup(save + len);
		freestr(save);
		save = hold;
		freestr(hold);
	}
	return (1);
}

int	checkEOF(char *buf, char *save, char **line)
{
	if (buf[0] == '\0')
	{
		*line = malloc(sizeof(char) * 1);
		*line[0] = '\0';
	}
	else if (save)
	{
		*line = ft_strdup(save);
		freestr(save);
	}
	return (0);
}


int	get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	char		*str;
	static char	*save[400];

	if (fd < 0 || !line)
		return (-1);
	while (read(fd, buf, BUFFER_SIZE) > 0)
	{
		if (!save[fd])
			save[fd] = ft_strdup(buf);
		else
		{
			str = ft_strjoin(save[fd], buf);
			freestr(save[fd]);
			save[fd] = str;
		}
		if ((ft_strchr(save[fd], '\n')))
			return (processline(save[fd], line));
	}
	if (read(fd, buf, BUFFER_SIZE) < 0)
		return (-1);
	return (checkEOF(buf, save[fd], line));
}
