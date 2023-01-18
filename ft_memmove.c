/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:53:17 by nreyes-p          #+#    #+#             */
/*   Updated: 2023/01/18 19:47:40 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *a;
	const char *b;

	a = dest;
	b = src;
	if (a == b || n == 0)
		return (dest);
	if ((b > a) && (a - b) < n)
	{
		while (n)
		{
			*(a++) = *(b++);
			--n;
		}
	}
}