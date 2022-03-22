#include "Bureaucrat.hpp"

//constructor

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
	this->_name = copy._name;
	this->_grade = copy._grade;
}

Bureaucrat const &Bureaucrat::operator=(Bureaucrat const &copy) {
	this->_name = copy._name;
	this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
}

//methods

std::string	Bureaucrat::getName(void) const {
	return (_name);
}

int	Bureaucrat::getGrade(void) const {
	return (_grade);
}

void	Bureaucrat::gradeIncrease(void) {
	_grade--;
	if (_grade == 0)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::gradeDecrease(void) {
	_grade++;
	if (_grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

void	Bureaucrat::signForm(Form &form) {
	if (form.getIsSigned()) {
		std::cout << "Form " << form.getName() << " is already signed\n";
		return ;
	}
	try {
		form.beSigned(*this);
	}
	catch (std::exception &exception) {
		std::cout << "Form " << form.getName() << " can't be signed, because bureaucrat's " <<
		exception.what() << "\n";
	}
}

//grade_to_high

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is too high");
}

//grade_to_low

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &ref) {
	out << ref.getName() << "'s grade is " << ref.getGrade();
	return (out);
}

