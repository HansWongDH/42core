/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 06:50:23 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/17 07:20:37 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	int len;

	len = ft_strlen((char *)str);
	while (len > 0)
	{
		if (str[len] == (char)c)
		{
			return ((char *)str + len);
		}
		len--;
	}
	return (NULL);
}