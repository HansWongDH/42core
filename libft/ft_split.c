/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 12:32:34 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/25 23:46:44 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	freemalloc(char **arr)
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
	int	count;
	int	i;
	
	i = 0;
	if (s[i] != c && s[i] != '\0')
		count = 1;
	else
		count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		s++;
	}
	return (count);
}

char	**memalloc(char *s, char c, int sep)
{
	int		i;
	int		len;
	char	**arr;

	arr = (char **)malloc(sizeof(char) * sep);
	len = 0;
	sep = 0;
	i = 0;
	while (s[i])
	{
		len++;
		if (s[i + 1] == c || s[i + 1] == '\0')
		{
			arr[sep] = ft_calloc(len + 1, 1);	
			if (arr[sep] == NULL)
			{
				freemalloc(arr);
				return (NULL);
			}
			sep++;
			len = 0;
		}
		i++;
	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		sep;
	int		i;

	if (!s)
		return (NULL);
	sep = numstr((char *)s, c);
	arr = memalloc((char *)s, c, sep);
	if (!arr)
		return (NULL);
	i = 0;
	sep = 0;
	while (*s)
	{
		if (*s && *s != c)
			arr[sep][i++] = *s;
		if (*s == c || *s == '\0')
			i = 0;
		s++;
	}
	return (arr);
}
