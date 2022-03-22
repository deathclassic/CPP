#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
	Form("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) :
	Form (copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()),
	_target(copy._target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

//methods

void	PresidentialPardonForm::execute(const Bureaucrat &ref) const {
	if (ref.getGrade() <= getGradeToExecute() && getIsSigned()){
		std::cout << _target << " has been pardoned by Zafod Beeblebrox\n";
	}
	else if (!getIsSigned())
		throw (Bureaucrat::UnsignedFormException());
	else
		throw (Bureaucrat::GradeTooLowException());
}