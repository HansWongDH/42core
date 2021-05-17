/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:32:34 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/17 22:17:05 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	**freemalloc(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

int	numstr(char *s, char c)
{
	int	i;

	i = 1;
	while (*s)
	{
		if (*s == c)
			i++;
		s++;
	}
	return (i);
}

char	**memalloc(char *s, char c)
{
	int		i;
	int		sep;
	int		len;
	char	**arr;

	sep = numstr((char *)s, c);
	arr = (char **)malloc(sizeof(char) * sep);
	len = 0;
	sep = 0;
	while (s[i])
	{
		len++;
		if (s[i + 1] == c || s[i + 1] == '\0')
		{
			arr[sep++] = (char *)malloc(sizeof(char) * len + 1);
			len = 0;
		}
		i++;
	}
	if (arr == NULL)
	{
		freemalloc(arr);
		return (NULL);
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		sep;
	int		i;

	if (s == NULL)
		return (NULL);
	arr = memalloc((char *)s, c);
	i = 0;
	sep = 0;
	while (*s)
	{
		if (*s && *s != c)
			arr[sep][i++] = *s;
		if (*s == c || *s == '\0')
		{
			arr[sep++][i] = '\0';
			i = 0;
		}
		s++;
	}
	return (arr);
}
