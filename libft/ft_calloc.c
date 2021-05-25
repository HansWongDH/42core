/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 09:43:40 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/26 00:29:26 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_calloc(size_t num, size_t size)
{
	int		tol;
	void	*ret;

	tol = num * size;
	ret = malloc(num * size);
	if (ret == NULL)
		return (NULL);
	ft_bzero (ret, tol);
	return (ret);
}
