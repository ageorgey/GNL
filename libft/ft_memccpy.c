/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:21:06 by ageorgey          #+#    #+#             */
/*   Updated: 2017/12/17 14:21:08 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*k;
	const unsigned char		*l;

	i = 0;
	k = (unsigned char*)dst;
	l = (unsigned char*)src;
	while (i < n)
	{
		k[i] = l[i];
		if (l[i] == (unsigned char)c)
			return (k + i + 1);
		i++;
	}
	return (NULL);
}
