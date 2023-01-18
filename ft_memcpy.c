/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:07:54 by nreyes-p          #+#    #+#             */
/*   Updated: 2023/01/18 19:27:10 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *a;
	const char *b;

	a = dest;
	b = src;
	if (a != NULL && b != NULL)
	{
		while (n)
		{
				*(a++) = *(b++);
			--n;
		}
	}
	return (dest);
}