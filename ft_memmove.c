/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:53:17 by nreyes-p          #+#    #+#             */
/*   Updated: 2022/12/17 13:20:26 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *a;

	i = 0;
	while (i < n)
	{
		a = (unsigned char*)(src + i);
		(unsigned char*)(dest + i) = a;
		i++;
	}
}