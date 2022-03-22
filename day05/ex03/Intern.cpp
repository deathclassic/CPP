#include "Intern.hpp"

Intern::Intern() {
	_formName[0] = "Shrubbery creation";
	_formName[1] = "Robotomy request";
	_formName[2] = "Presidential pardon";

	_formFuncPtr[0] = &Intern::_shrubbery;
	_formFuncPtr[1] = &Intern::_robotomy;
	_formFuncPtr[2] = &Intern::_presidential;
}

Intern::Intern(Intern const &copy) {
	this->_formName[0] = copy._formName[0];
	this->_formName[1] = copy._formName[1];
	this->_formName[2] = copy._formName[2];

	this->_formFuncPtr[0] = &Intern::_shrubbery;
	this->_formFuncPtr[1] = &Intern::_robotomy;
	this->_formFuncPtr[2] = &Intern::_presidential;
}

Intern const &Intern::operator=(Intern const &copy) {
	this->_formName[0] = copy._formName[0];
	this->_formName[1] = copy._formName[1];
	this->_formName[2] = copy._formName[2];

	this->_formFuncPtr[0] = &Intern::_shrubbery;
	this->_formFuncPtr[1] = &Intern::_robotomy;
	this->_formFuncPtr[2] = &Intern::_presidential;
	return (*this);
}

Intern::~Intern() {}

//methods

Form	*Intern::_shrubbery(std::string target) {
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::_robotomy(std::string target) {
	return (new RobotomyRequestForm(target));
}

Form	*Intern::_presidential(std::string target) {
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeForm(std::string form, std::string target) {
	for (int i = 0; i < 3; i++) {
		if (form == _formName[i]){
			std::cout << "Intern creates " << form << " form\n";
			return ((this->*_formFuncPtr[i])(target));
		}
	}
	throw InternException();
}

Intern::InternException::InternException() {}
Intern::InternException::~InternException() throw() {}

const char *Intern::InternException::what() const throw() {
	return ("Intern exception: unknown form");
}