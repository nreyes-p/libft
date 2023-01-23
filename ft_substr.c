/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:07:18 by tithan            #+#    #+#             */
/*   Updated: 2023/01/23 20:52:23 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;

	i = 0;
	subs = (char *)malloc((len + 1) * sizeof(*s));
	/*if (start <= ft_strlen(s) && len > 0 && len < __SIZE_MAX__)
		subs = (char *)malloc((len + 1) * sizeof(*s));
	else if (len < 1)
		subs = (char *)malloc(2 * sizeof(*s));
	else if (start > ft_strlen(s) && len > ft_strlen(s))
		subs = (char *)malloc((ft_strlen(s) + 1) * sizeof(*s));
	else if (len >= ft_strlen(s))
		subs = (char *)malloc((ft_strlen(s) - start + 1) * sizeof(*s));
	if (subs == NULL)
		return (0);
	if (len < 1)
	{	
		subs[0] = 0;
		i++;
	}*/
	while (i < (unsigned int)len && s[start] && start <= ft_strlen(s))
	{
		subs[i] = s[start];
		start++;
		i++;
	}
	subs[i] = '\0';
	return (subs);
}
