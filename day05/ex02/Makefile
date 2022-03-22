CC = c++
NAME = bureaucrat
SRCS =	Bureaucrat.cpp Form.cpp main.cpp PresidentialPardonForm.cpp\
		ShrubberyCreationForm.cpp RobotomyRequestForm.cpp
INCLUDES =	Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp\
			ShrubberyCreationForm.hpp ShrubberyCreationForm.hpp
OBJS = $(SRCS:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98

all: ${NAME}

${NAME}: ${OBJS} ${INCLUDES}
		${CC} ${SRCS} ${FLAGS} -o ${NAME}

clean:
	rm -rf ${OBJS} *_shrubbery

fclean: clean
		rm -rf ${NAME}

re: fclean all

.PHONY: clean fclean all re 