/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tithan <tithan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 19:05:18 by nreyes-p          #+#    #+#             */
/*   Updated: 2023/01/22 18:23:40 by tithan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>

int					ft_isalpha(int c);

void				ft_bzero(void *s, size_t n);

int					ft_isalnum(int c);

int					ft_isascii(int c);

int					ft_isdigit(int c);

int					ft_isprint(int c);

void				*ft_memcpy(void *dest, const void *src, size_t n);

void				*ft_memmove(void *dest, const void *src, size_t n);

void				*ft_memset(void *s, int c, size_t n);

size_t				ft_strlen(const char *s);

size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);

size_t				ft_strlcat(char *dest, char *src, size_t size);

int					ft_toupper(int c);

int					ft_tolower(int c);

char				*ft_strchr(const char *s, int c);

char				*ft_strrchr(const char *s, int c);

int					ft_strncmp(const char *s1, const char *s2, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

char				*ft_strnstr(const char *big, const char *little, size_t len);

int					ft_atoi(const char *nptr);

#endif
