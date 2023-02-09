/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:07:18 by nreyes-p          #+#    #+#             */
/*   Updated: 2023/02/09 17:04:58 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;

	if (ft_strlen(s) < start)
		len = 0;
	if (start < 4294967295 && len > 0)
	{
		if (ft_strlen(s + start) < len)
			len = ft_strlen(s + start);
	}
	subs = (char *)malloc((len + 1) * sizeof(*subs));
	if (subs == NULL)
		return (0);
	if (len != 0)
		ft_strlcpy(subs, (s + start), (len + 1));
	else
		ft_strlcpy(subs, s, (len + 1));
	return (subs);
}
