/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:53:43 by maleandr          #+#    #+#             */
/*   Updated: 2022/10/03 16:02:47 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdarg.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

#endif

char    *get_next_line(int fd);
char    *catbuffer(char *checkpoint, const char *buffer, int tosize);

int getsize(const char *buffer, int end);
int search_end(char *buffer);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2

#endif