/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:37:00 by ageorgey          #+#    #+#             */
/*   Updated: 2017/12/17 14:37:02 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*str;

	str = NULL;
	if (s != NULL)
	{
		len = ft_strlen(s);
		if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
			return (NULL);
		i = 0;
		while (s[i])
		{
			str[i] = (*f)(s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}
