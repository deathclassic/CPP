#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
	Bureaucrat	Bykov("Andrey", 10);
	Intern		Romanenko;
	Intern		Lobanov(Romanenko);
	Form		*formPtr;

	try {
		formPtr = Lobanov.makeForm("Shrubbery creation", "Bender");
		Bykov.signForm(*formPtr);
		Bykov.executeForm(*formPtr);
	}
	catch (std::exception &exception){
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";
	delete formPtr;
	try {
		formPtr = Lobanov.makeForm("Robotomy request", "Bender");
		Bykov.signForm(*formPtr);
		Bykov.executeForm(*formPtr);
	}
	catch (std::exception &exception){
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";
	delete formPtr;
	try {
		formPtr = Lobanov.makeForm("Presidential pardon", "Bender");
		Bykov.signForm(*formPtr);
		Bykov.executeForm(*formPtr);
	}
	catch (std::exception &exception){
		std::cout << exception.what() << "\n";
	}
	delete formPtr;
	return (0);
}