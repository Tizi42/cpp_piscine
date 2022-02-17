# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 17:43:57 by tyuan             #+#    #+#              #
#    Updated: 2022/02/15 17:43:58 by tyuan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= conversion

SRCS	= main.cpp detectType.cpp display.cpp

OBJS	= ${addprefix ${DIROBJ}/, ${SRCS:.cpp=.o}}

DIROBJ	= objs

CXX		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= -I ${DIRHEADER}

DIRHEADER	= .

HEADERS = conversion.hpp

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
