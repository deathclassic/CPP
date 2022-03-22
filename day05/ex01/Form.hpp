#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_isSigned;
	public:
		Form(std::string, int, int);
		Form(Form const &);
		~Form();

		std::string	getName(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;
		bool		getIsSigned() const;

		void		beSigned(Bureaucrat &ref);

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

std::ostream	&operator<<(std::ostream &out, const Form &ref);
