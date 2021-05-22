/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding-ha@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 09:43:40 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/19 17:12:32 by wding-ha         ###   ########.fr       */
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

int	main(void)
{
	char *s1;
	char *s2;
	int		i;
	
	s1 = ft_calloc(4, 1);
	s2 = malloc(sizeof(char) * 4);
	s1[0] = 'H';
	s2[0] = 'H';
	s1[2] = 'H';
	s2[2] = 'H';
	i = 0;
	while (i < 4)
	{
		write(1, &s1[i], 1);
		i++;
	}
	write(1, "\n", 1);
	i = 0;
	while (i < 4)
	{
		write(1, &s2[i], 1);
		i++;
	}
	write(1, "\n", 1);
	free(s1);
	free(s2);
}