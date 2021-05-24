/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 11:24:57 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/25 02:46:25 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, char *src, size_t n)
{
	size_t	i;
	size_t	len;
	int		ret;

	i = 0;
	len = 0;
	if (n <= 0)
		return (0);
	while (src[len])
		len++;
	while (dst[i])
		i++;
	if (n <= i)
		ret = len + n;
	else
		ret = len + i;
	len = 0;
	while (i < (n - 1) && src[len])
		dst[i++] = src[len++];
	dst[i] = '\0';
	return (ret);
}
