NAME	= iPhonebook

SRCS	= phonebook.cpp PhoneBook.class.cpp Contact.class.cpp

OBJS	= ${addprefix ${DIROBJ}/, ${SRCS:.cpp=.o}}

DIROBJ	= objs

CXX		= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

#INCLUDE	= -I philo/include/ -I libft/includes/

#HEADER	= push_swap.h

RM	= rm -rf

all:	${NAME}

${NAME}: ${OBJS}
	${CXX} ${CFLAGS} $^ -o $@

${DIROBJ}:
	mkdir -p $@

${DIROBJ}/%.o: %.cpp | ${DIROBJ}
	${CXX} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${DIROBJ}

fclean: clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
