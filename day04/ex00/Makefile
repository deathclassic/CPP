CC = c++
NAME = animal
SRCS =	Animal.cpp Cat.cpp Dog.cpp main.cpp \
		WrongAnimal.cpp WrongDog.cpp WrongCat.cpp
INCLUDES =	Animal.hpp Cat.hpp Dog.hpp \
			WrongAnimal.hpp WrongDog.hpp WrongCat.hpp
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

