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

int gethoessize(const char *buffer, int end) //guarda um numero de caracters tipo buffer size no buffer
{
    int i;

    i = -1;
    while (buffer[++i] && buffer[i] != '\n')
        ;
    return (i + (buffer[i] == '\n')); // adiciona mais um pk segunda parte 'e true ent e 1 ni  ee
}
