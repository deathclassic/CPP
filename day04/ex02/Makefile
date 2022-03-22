CC = c++
NAME = animal
SRCS =	Animal.cpp Cat.cpp Dog.cpp Brain.cpp main.cpp
INCLUDES =	Animal.hpp Cat.hpp Dog.hpp Brain.hpp
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

