/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:40:21 by ageorgey          #+#    #+#             */
/*   Updated: 2017/12/17 14:40:22 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(s2) == 0)
		return ((char*)s1);
	while (s1[i] && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (s1[i + j] == s2[j] && j < ft_strlen(s2))
			{
				if (i + j >= len)
					return (NULL);
				if (j == ft_strlen(s2) - 1)
					return ((char*)s1 + i);
				j++;
			}
		}
		j = 0;
		i++;
	}
	return (0);
}
