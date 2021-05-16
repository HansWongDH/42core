/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 15:57:40 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/13 16:06:20 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((char)c >= 48 && (char)c <= 57)
		return (1);
	if ((char)c >= 65 && (char)c <= 90)
		return (1);
	if ((char)c >= 97 && (char)c <= 122)
		return (1);
	return (0);
}