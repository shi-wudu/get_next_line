# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maleandr <maleandr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/03 15:32:48 by maleandr          #+#    #+#              #
#    Updated: 2022/10/03 15:32:57 by maleandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_hexa.c ft_opc.c ft_printf.c

NAME			=	libftprintf.a

OBJS			=	$(SRCS:.c=.o)

CC 				=	gcc

CFLAGS			=	-Wall -Werror -Wextra -I.

all:		$(NAME)

$(NAME): 	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				rm -f $(OBJS)

fclean: 	clean
				rm -f $(NAME)

re:			fclean all

rebonus:	fclean bonus

so:
			$(CC) -shared -fPIC $(CFLAGS) $(SRCS)
			gcc -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re bonus rebonus so