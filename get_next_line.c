/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:22:59 by maleandr          #+#    #+#             */
/*   Updated: 2022/10/03 15:32:57 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE];
	char		*line;
	int			flag;
	int			totalsize;

	totalsize = 0;
	line = NULL;
	if (fd < 0 || fd >= FOPEN_MAX || BUFFER_SIZE < 1)
		return (line);
	while (1)
	{
		flag = 1;
		if (!buffer[0])
		{
			flag = read(fd, buffer, BUFFER_SIZE);
		}
		totalsize += getsize(buffer, '\n');
		if (flag > 0)
		{
			line = catbuffer(line, buffer, totalsize);
		}
		if (flag <= 0 || search_end(buffer) == 1)
			break ;
	}
	return (line);
}
int	main(void)
{
	int		fd;
 	char	*s;
 	s = NULL;
 	fd = open("Notas.txt", O_RDONLY);
 	if ((fd) == -1)
 	{
 		printf("file opening failed\n");
 		exit(0);
 	}
 	s = get_next_line(fd);
 	while (s)
 	{
 		printf("%s", s);
 		if (s)
 			free(s);
 		s = get_next_line(fd);
 	}
 	return (0);
}