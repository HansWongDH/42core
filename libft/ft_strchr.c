/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:01:11 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/25 03:03:49 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	if (c != 0)
	{
		while (*str)
		{
			if (*str == (char)c)
			{
				return ((char *)str);
			}
			str++;
		}
	}
	return (NULL);
}
