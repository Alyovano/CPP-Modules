# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aly <aly@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/13 17:03:33 by alyovano          #+#    #+#              #
#    Updated: 2021/05/15 12:40:05 by aly              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = main.cpp convert.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = convert

FLAGS = -Wall -Wextra -Werror -std=c++98
CLANG = clang++ $(FLAGS)

RM = rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CLANG) $(OBJS) -o $(NAME)

clean:		
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re