/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tithan <tithan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:38:17 by tithan            #+#    #+#             */
/*   Updated: 2023/01/22 19:46:39 by tithan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*r;
	size_t	i;

	i = 0;
	r = malloc(nmemb * size);
	if (r == NULL)
		return (0);
	while (i < (nmemb * size))
	{
		((char *)(r))[i] = 0;
		i++;
	}
	return (r);
}
