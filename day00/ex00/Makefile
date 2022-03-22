CC =	clang++
NAME =	megaphone
SRC =	megaphone.cpp
OBJS = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
		${CC} ${SRC} ${FLAGS} -o ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY: clean fclean all re 