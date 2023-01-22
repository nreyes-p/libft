/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tithan <tithan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:07:54 by nreyes-p          #+#    #+#             */
/*   Updated: 2023/01/21 11:42:02 by tithan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*a;
	const char		*b;
	size_t			i;

	a = dest;
	b = src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dest);
}
