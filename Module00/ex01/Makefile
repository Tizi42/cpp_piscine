NAME	= iPhonebook

SRCS	= main.cpp PhoneBook.class.cpp Contact.class.cpp tools.cpp

DIRSRC = srcs

OBJS	= ${addprefix ${DIROBJ}/, ${SRCS:.cpp=.o}}

DIROBJ	= objs

CXX		= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

INCLUDE	= -I ${DIRHEADER}

DIRHEADER	= includes

RM	= rm -rf

all:	${NAME}

${NAME}: ${OBJS}
	${CXX} ${CFLAGS} ${INCLUDE} $^ -o $@

${DIROBJ}:
	mkdir -p $@

${DIROBJ}/%.o: ${DIRSRC}/%.cpp | ${DIROBJ}
	${CXX} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean:
	${RM} ${DIROBJ}

fclean: clean
	${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
