CC = c++
NAME = fixed
SRCS = Fixed.cpp main.cpp
INCLUDES = Fixed.hpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS} ${INCLUDES}
		${CC} ${SRCS} ${FLAGS} -o ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY: clean fclean all re 