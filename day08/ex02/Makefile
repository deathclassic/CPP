CC = c++
NAME = mutant_stack
SRCS = main.cpp
INCLUDES = MutantStack.hpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(SRCS) $(FLAGS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re 
