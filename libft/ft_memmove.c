/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:23:25 by ageorgey          #+#    #+#             */
/*   Updated: 2017/12/17 14:23:38 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*j;
	const char	*k;

	i = 0;
	j = (char*)dst;
	k = (const char*)src;
	if (dst < src)
	{
		while (i < n)
		{
			j[i] = k[i];
			i++;
		}
	}
	else if (dst > src)
	{
		while (n > 0)
		{
			n--;
			j[n] = k[n];
		}
	}
	return (dst);
}
