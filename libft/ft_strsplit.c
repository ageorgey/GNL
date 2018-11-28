/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 14:41:50 by ageorgey          #+#    #+#             */
/*   Updated: 2017/12/17 14:41:51 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *str, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if (str[i] == '\0')
		return (0);
	if (str[0] != c)
		word++;
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			word++;
		i++;
	}
	return (word);
}

static int	ft_count_letter(char const *str, char c, int i)
{
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static char	*ft_print(char const *s, int i, char c)
{
	char	*str;
	int		j;

	j = 0;
	if (s[i])
		if (!(str = (char*)malloc(sizeof(str) * ft_count_letter(s, c, i) -
						i + 1)))
			return (NULL);
	while (s[i] && s[i] != c)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**str;
	int		i;
	int		tab;

	i = 0;
	tab = 0;
	if (s == NULL)
		return (NULL);
	if (!(str = (char**)malloc(sizeof(char*) * ft_count_word(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			str[tab] = ft_print(s, i, c);
			tab++;
		}
		while (s[i] && s[i] != c)
			i++;
	}
	str[tab] = NULL;
	return (str);
}
