#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
		std::string _name;
		int			_grade;
	public:
		Bureaucrat(std::string, int);
		Bureaucrat(Bureaucrat const &);
		Bureaucrat const &operator=(Bureaucrat const &);
		~Bureaucrat();

		std::string	getName() const;
		int			getGrade() const;
		void		gradeIncrease();
		void		gradeDecrease();

		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException();
				~GradeTooHighException() throw();
				
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				GradeTooLowException();
				~GradeTooLowException() throw();

				const char *what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &ref);