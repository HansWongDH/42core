/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 15:40:49 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/18 19:07:45 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_intlen(long n, int sign)
{
	int	len;

	len = 0;
	if (sign < 0)
	{
		len = 1;
	}
	while (n)
	{
		len++;
		if (n / 10 == 0)
			break ;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	char	*hold;
	long	num;

	sign = 1;
	if (n < 0)
		sign *= -1;
	num = n;
	num *= sign;
	i = ft_intlen(num, sign);
	hold = malloc(sizeof(char) * i + 1);
	if (hold == NULL)
		return (NULL);
	if (sign < 0)
		hold[0] = '-';
	hold[i - 1] = '\0';
	while (i-- > 0)
	{
		if (sign < 0 && i == 0)
			break ;
		hold[i] = '0' + (num % 10);
		num /= 10;
	}
	return (hold);
}
