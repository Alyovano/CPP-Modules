# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/09 22:40:04 by aly               #+#    #+#              #
#    Updated: 2021/03/27 22:46:15 by alyovano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = main.cpp AnnuaireClass.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = Annuaire

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
