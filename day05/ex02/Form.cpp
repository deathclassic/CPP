#include "Form.hpp"

//constructor

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
	_isSigned = false;
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw (Form::GradeTooHighException());
	else if (_gradeToSign > 150 || _gradeToExecute > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const &copy) : _name(copy._name),
_gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {
}

Form::~Form(void) {
}

//methods

std::string Form::getName(void) const {
	return (_name);
}

int	Form::getGradeToSign(void) const {
	return (_gradeToSign);
}

int	Form::getGradeToExecute(void) const {
	return (_gradeToExecute);
}

bool Form::getIsSigned(void) const {
	return (_isSigned);
}

void	Form::beSigned(Bureaucrat &ref) {
	if (getIsSigned())
		return ;
	if (ref.getGrade() <= _gradeToSign) {
		_isSigned = true;
		std::cout << ref.getName() << " signed " << _name << "\n";
	}
	else
		throw (Form::GradeTooLowException());
}

std::ostream &operator<<(std::ostream &out, const Form &ref) {
	std::string sign_info;

	if (ref.getIsSigned())
		sign_info = "signed";
	else
		sign_info = "not signed";
	out << "Form: " << ref.getName() << "\n" <<
	"Grade to sign: " << ref.getGradeToSign() << "\n" <<
	"Grade to execute: " << ref.getGradeToExecute() << "\n" <<
	sign_info;
	return (out);
}

//exceptions

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw() {
	return ("grade is too high");
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw() {
	return ("grade is too low");
}
