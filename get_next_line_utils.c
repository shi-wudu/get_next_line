/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:27:44 by maleandr          #+#    #+#             */
/*   Updated: 2022/10/03 15:32:57 by maleandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int getsize(const char *buffer, int end) //guarda um numero de caracters tipo buffer size no buffer
{
    int i;

    i = -1;
    while (buffer[++i] && buffer[i] != '\n')
        ;
    return (i + (buffer[i] == '\n')); // adiciona mais um pk segunda parte 'e true ent e 1 ni  ee
}

char    *catbuffer(char *checkpoint, const char *buffer, int tosize)
{
    int     i;
    int     j;
    char    *temp;

    i = 0;
    j = 0;
    temp = malloc((tosize + 1) * sizeof(char));
    if(!temp)
        return (NULL);
    while (checkpoint != NULL && checkpoint[i] != '\0')
    {
        temp[i] = checkpoint[i];
        i++;
    }
    while (buffer && buffer[j])
    {
            temp[i++] = buffer[j];
            if (buffer[j] == '\n')
                break ;
            j++;
    }
    temp[i] = '\0';
    if (checkpoint)
        free(checkpoint);
    return (temp);
}

int search_end(char *buffer)
{
    int i;
    int j;
    int flag;

    i = 0;
    j = 0;
    flag = 0;
    while (buffer[i])
    {
        if (flag == 0 && buffer[i] == '\n')
            flag = 1;
        else if (flag == 1)
            buffer[j++] = buffer[i];
        buffer[i++] = 0;
    }
    return (flag);
}