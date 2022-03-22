#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) :
Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()) {
	_target = copy._target;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

//methods

void	RobotomyRequestForm::execute(const Bureaucrat &ref) const {
	if (ref.getGrade() <= getGradeToExecute() && getIsSigned()) {
		srand(time(0));
		std::cout << "*LOUD BUZZING AND DRILLING SOUND*\n";
		if (rand() % 2 == 0)
			std::cout << _target << " has been succesfully robotomized for 50 percent of the time\n";
		else
			std::cout << "robotomy failed\n";
	}
	else if (getIsSigned() == false)
		throw (Bureaucrat::UnsignedFormException());
	else
		throw (Bureaucrat::GradeTooLowException());
}