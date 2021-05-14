/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 19:46:11 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/11 21:52:20 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchar(void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)src)[i] == (unsigned char)c)
			return (src + i);
		i++;
	}
	return (0);
}
