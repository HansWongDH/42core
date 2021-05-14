/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:09:02 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/12 11:23:53 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		ret;

	ret = 0;
	i = 0;
	while (src[ret])
		ret++;
	if (n != 0)
	{
		while (i < (n - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ret);
}
