# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aly <aly@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 22:40:04 by aly               #+#    #+#              #
#    Updated: 2021/03/31 19:42:38 by aly              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp utils.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = replace

FLAGS = -Wall -Wextra -Werror -std=c++98
CLANG = clang++ $(FLAGS)

RM = rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CLANG) $(OBJS) -o $(NAME)

clean:		
	$(RM) $(OBJS) *.replace

fclean:		clean
	$(RM) $(NAME) *.replace

re:			fclean all

.PHONY:		all clean fclean re
