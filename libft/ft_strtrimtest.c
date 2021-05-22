/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimtest.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 14:51:58 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/19 16:38:08 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"



int	setsize(char const *s1, char const *set)
{
	int		i;
	int		size;

	size = 0;
	while (*s1)
	{
		i = 0;
		while (*(s1 + i) == set[i])
		{
			if (set[i + 1] == '\0')
			{
				size += i;
				i = 0;
				break ;
			}
			i++;
		}
		s1++;
	}
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		del;
	int		i;

	del = setsize(s1, set);
	ret = malloc(sizeof(char) * ft_strlen(s1) - del + 1);
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (*s1)
	{
		ret[i] =
	}
	
}

int	main(void)
{
	char	s1[20] = "HELOLOLOLWORLDLO";
	char	s2[3] = "LO";
	char	*s3;

	s3 = ft_strtrim(s1, s2);
	printf("%s", s3);
	free(s3);
}