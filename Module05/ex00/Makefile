# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 09:51:27 by tyuan             #+#    #+#              #
#    Updated: 2022/02/11 09:51:30 by tyuan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 00

SRCS	= main.cpp Bureaucrat.cpp

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
