/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 19:15:36 by nreyes-p          #+#    #+#             */
/*   Updated: 2023/01/17 19:52:35 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l;
	unsigned int	i;
	unsigned int	in_length;

	l = ft_strlen(dest);
	in_length = l;
	i = 0;
	if (l)
	{
		while (src[i] != '\0')
		{
			if (i < (size - l - 1))
			{	
				dest[l] = src[i];
				l++;
			}
			i++;
		}
		if (l < size)
			dest[l] = '\0';
	}
	return (in_length + i);
}