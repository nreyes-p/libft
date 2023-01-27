/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 17:09:25 by tithan            #+#    #+#             */
/*   Updated: 2023/01/27 18:02:08 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (little[n] == big[i])
		{
			if (n == ft_strlen(little) - 1)
				return ((char *)(big + i - n));
			n++;
		}
		else
			n = 0;
		i++;
	}
	return (0);
}
