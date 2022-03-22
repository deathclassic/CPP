#include "Bureaucrat.hpp"

//constructor

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Bureaucrat constructor called\n";
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
	std::cout << "Bureaucrat copy constructor called\n";
	this->_name = copy._name;
	this->_grade = copy._grade;
}

Bureaucrat const &Bureaucrat::operator=(Bureaucrat const &copy) {
	std::cout << "Bureaucrat copy assignment constructor called\n";
	this->_name = copy._name;
	this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called\n";
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

//grade_to_high

Bureaucrat::GradeTooHighException::GradeTooHighException() {
	std::cout << "GradeTooHighException constructor called\n";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
	std::cout << "GradeTooHighException destructor called\n";
}
const char *Bureaucrat::GradeTooHighException::what() const throw() {
	std::cout << "going to throw exception\n";
	return ("Grade is too high");
}

//grade_to_low

Bureaucrat::GradeTooLowException::GradeTooLowException() {
	std::cout << "GradeTooLowException constructor called\n";
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {
	std::cout << "GradeTooLowException destructor called\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	std::cout << "going to throw exception\n";
	return ("Grade is too low");
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &ref) {
	out << ref.getName() << "'s grade is " << ref.getGrade();
	return (out);
}

