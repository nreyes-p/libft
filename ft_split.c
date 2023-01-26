/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreyes-p <nreyes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 20:03:01 by nreyes-p          #+#    #+#             */
/*   Updated: 2023/01/26 19:04:43 by nreyes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_getlen(char const *s, char c)
{
	size_t	i;
	int		words;
	int		counted;

	i = 0;
	words = 0;
	counted = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && counted == 0)
		{
			words++;
			counted = 1;
		}
		if (s[i] == c && counted == 1)
			counted = 0;
		i++;
	}
	return (words);
}

static char	**ft_dosplit(char const *s, char c, char **res)
{
	size_t	i;
	size_t	index;
	int		n;

	i = 0;
	index = 0;
	n = 0;
	while (s[i] != '\0' && ft_getlen(s, c) > 0)
	{
		if (s[i] == c && i > 0)
		{
			if (s[i - 1] != c)
			{
				res[n++] = ft_substr(s, index, (i - index));
				index = i;
			}
		}
		if (s[i] == c)
			index++;
		if (n == ft_getlen(s, c) - 1 && s[i] != c && i == ft_strlen(s) - 1)
			res[n++] = ft_substr(s, index, (i - index + 1));
		i++;
	}
	res[n] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = (char **)malloc((ft_getlen(s, c) + 1) * sizeof(s));
	if (res == NULL)
		return (0);
	res = ft_dosplit(s, c, res);
	return (res);
}
