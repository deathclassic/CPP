#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#pragma once

class Intern {
		typedef Form *(Intern::*formFuncPtr[3])(std::string);
	private:
		std::string	_formName[3];
		formFuncPtr	_formFuncPtr;

		Form	*_shrubbery(std::string);
		Form	*_robotomy(std::string);
		Form	*_presidential(std::string);
	public:
		Intern();
		Intern(Intern const &);
		Intern const &operator=(Intern const &);
		~Intern();

		Form	*makeForm(std::string, std::string);
		
		class InternException : public std::exception {
			public:
				InternException();
				virtual ~InternException() throw();

				const char *what() const throw();
		};
};