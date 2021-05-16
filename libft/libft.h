/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wding-ha <wding@student.42kl.edu.my>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 07:29:06 by wding-ha          #+#    #+#             */
/*   Updated: 2021/05/17 07:37:24 by wding-ha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft.h
#define libft.h

#include <stddef.h>
#include <stdlib.h>

void	ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
int	    ft_memcmp(const void *s1, const void *s2, size_t n);
int	    ft_strlen(char *str);
int	    ft_strlcpy(char *dest, const char *src, size_t n);
int	    ft_strlcat(char *dst, char *src, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int	    ft_isalpha(int c);
int	    ft_isascii(int c);
int	    ft_isdigit(int c);
int	    ft_isprint(int c);
int	    ft_isalnum(int c);
int	    ft_tolower(int c);
int 	ft_toupper(int c);

#endif