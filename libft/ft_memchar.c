/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 19:46:11 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/17 07:39:10 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
