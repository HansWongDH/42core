/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 09:10:36 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/17 09:30:51 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi(const char *str)
{
	long	i;
	int		sign;

	sign = 1;
	while (*str == 32 || (*str > 9 && *str < 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		i *= 10;
		i += *s - 48;
		str++;
	}
	return (sign * (int)i);
}
