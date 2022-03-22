CC = c++
NAME = replace
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS}
		${CC} ${SRCS} ${FLAGS} -o ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY: clean fclean all re 