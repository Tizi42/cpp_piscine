# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 17:53:34 by tyuan             #+#    #+#              #
#    Updated: 2022/01/29 17:53:36 by tyuan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombie

SRCS	= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJS	= ${addprefix ${DIROBJ}/, ${SRCS:.cpp=.o}}

DIROBJ	= objs

CXX		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= -I ${DIRHEADER}

DIRHEADER	= .

RM	= rm -rf

all:	${NAME}

${NAME}: ${OBJS}
	${CXX} ${CFLAGS} ${INCLUDE} $^ -o $@

${DIROBJ}:
	mkdir -p $@

${DIROBJ}/%.o: %.cpp | ${DIROBJ}
	${CXX} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean:
	${RM} ${DIROBJ}

fclean: clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
