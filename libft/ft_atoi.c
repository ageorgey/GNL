/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:16:09 by ageorgey          #+#    #+#             */
/*   Updated: 2017/12/17 14:16:15 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int i;
	int a;
	int neg;

	i = 0;
	a = 0;
	neg = 0;
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\f' || str[i] == '\v'
			|| str[i] == ' ' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		if (str[i] >= '0')
			a = a * 10 + (str[i] - '0');
		i++;
	}
	if (neg == -1)
		return (-a);
	return (a);
}
