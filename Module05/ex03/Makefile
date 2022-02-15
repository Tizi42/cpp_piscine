# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tyuan <tyuan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/11 09:51:27 by tyuan             #+#    #+#              #
#    Updated: 2022/02/15 17:04:43 by tyuan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 03

SRCS	= main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS	= ${addprefix ${DIROBJ}/, ${SRCS:.cpp=.o}}

DIROBJ	= objs

CXX		= c++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= -I ${DIRHEADER}

DIRHEADER	= .

HEADERS = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp \
			RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

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
