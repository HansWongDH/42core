/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 18:44:22 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/25 14:28:55 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!n || !dest)
	{
		if (src < dest)
		{
			while (n > 0)
			{
				((char *)dest)[n - 1] = ((char *)src)[n - 1];
				n--;
			}
		}
		else
		{
			i = 0;
			while (i < n)
			{
				((char *)dest)[i] = ((char *)src)[i];
				i++;
			}
		}
	}
	return (dest);
}
