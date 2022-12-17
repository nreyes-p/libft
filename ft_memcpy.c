/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:07:54 by nreyes-p          #+#    #+#             */
/*   Updated: 2022/12/17 13:11:06 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *a;
	unsigned char *b;

	i = 0;
	a = dest;
	b = src;
	while (i < n)
	{
		if ((a + i == b) || (b + i == a))
			return;
		else
			(unsigned char*)(dest + i) = (unsigned char*)(src + i);
		i++;
	}
	return (dest);
}