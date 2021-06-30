/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 08:31:29 by wding-ha          #+#    #+#             */
/*   Updated: 2021/06/30 09:29:10 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	freestr(char *str)
{
	free(str);
	str = NULL;
}

int	processline(char *save, char **line)
{
	int		len;
	char	*ret;
	char	*hold;

	len = 0;
	ret = ft_strchr(save, '\n');
	if (!ret)
		return (-1);
	len = (ft_strlen(save) - ft_strlen(ret));
	*line = ft_substr(save, 0, len);
	hold = ft_strdup(save + len);
	freestr(save);
	save = hold;
	return (1);
}

int	get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	char		*str;
	static char	*save[4000];

	if (fd < 0 || line == NULL)
		return (-1);
	while (read(fd, buf, BUFFER_SIZE) > 0)
	{
		if (save[fd] == NULL)
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
	*line = ft_strdup(save[fd]);
	freestr(save[fd]);
	return (0);
}
