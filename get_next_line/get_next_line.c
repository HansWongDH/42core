/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 08:31:29 by wding-ha          #+#    #+#             */
/*   Updated: 2021/07/01 20:04:28 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"

void	freestr(char **str)
{
	if (str || *str)
	{
		free(*str);
		*str = NULL;
	}
}

int	checkEOF(char **save, char **line, int ret)
{
	if (ret < 0)
		return (-1);
	if (*save == NULL && ret == 0)
	{
		*line = malloc(sizeof(char) * 1);
		(*line)[0] = '\0';
	}
	else
	{
		*line = ft_strdup(*save);
		freestr(save);
	}
	return (0);
}

int	processline(char **save, char **line, int ret)
{
	int		len;
	char	*hold;

	len = 0;
	while ((*save)[len] && (*save)[len] != '\n')
		len++;
	if ((*save)[len] == '\n')
	{
		*line = ft_substr(*save, 0, len);
		hold = ft_strdup(&((*save)[len + 1]));
		freestr(save);
		*save = hold;
		if ((*save)[0] == '\0')
			freestr(save);
	}
	else
		return (checkEOF(save, line, ret));
	return (1);
}

int	get_next_line(int fd, char **line)
{
	char		buf[BUFFER_SIZE + 1];
	char		*str;
	static char	*save;
	int			ret;

	if (fd < 0 || !line)
		return (-1);
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret < 0)
			break ;
		buf[ret] = '\0';
		if (!save)
			save = ft_strdup(buf);
		else
		{
			str = ft_strjoin(save, buf);
			freestr(&save);
			save = str;
		}
		if ((ft_strchr(save, '\n')))
			return (processline(&save, line, ret));
	}
	return (checkEOF(&save, line, ret));
}
