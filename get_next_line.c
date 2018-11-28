/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageorgey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:41:47 by ageorgey          #+#    #+#             */
/*   Updated: 2018/11/25 19:04:17 by ageorgey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./get_next_line.h"

int			get_next_line(const int fd, char **line)
{
	static char	*str[OPEN_MAX];
	char		*tmp;
	char		buf[BUFF_SIZE + 1];
	int			ret;

	if (fd < 0 || read(fd, "", 0) < 0 || line == NULL || fd > OPEN_MAX)
		return (-1);
	if (!str[fd])
		str[fd] = ft_strnew(1);
	while (!(ft_strchr(str[fd], '\n')) && (ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		tmp = ft_strjoin(str[fd], buf);
		ft_strdel(&str[fd]);
		str[fd] = tmp;
	}
	if (ft_strlen(str[fd]) == 0)
		return (0);
	*line = ft_strsub(str[fd], 0, ft_strnlen(str[fd], '\n'));
	tmp = ft_strsub(str[fd], ft_strnlen(str[fd], '\n') + 1,
			ft_strlen(&str[fd][ft_strnlen(str[fd], '\n')]));
	ft_strdel(&str[fd]);
	str[fd] = tmp;
	return (1);
}
