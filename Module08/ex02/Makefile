# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/18 17:39:25 by tyuan             #+#    #+#              #
#    Updated: 2022/02/18 17:39:26 by tyuan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 02

SRCS	= main.cpp

OBJS	= ${addprefix ${DIROBJ}/, ${SRCS:.cpp=.o}}

DIROBJ	= objs

CXX		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= -I ${DIRHEADER}

DIRHEADER	= .

HEADERS = MutantStack.hpp

RM	= rm -rf

all:	${NAME}

${NAME}: ${HEADERS} ${OBJS}
	${CXX} ${CFLAGS} ${INCLUDE} ${OBJS} -o $@

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
