#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {
	Bureaucrat john("John", 10);
	RobotomyRequestForm one("Mike");
	try {
		john.signForm(one);
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << "\n";
	}
	try {
		one.execute(john);
		john.executeForm(one);
	}
	catch (std::exception &exception){
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";
	ShrubberyCreationForm two("josh");
	john.signForm(two);
	try {
		two.execute(john);
		john.executeForm(two);
	}
	catch (std::exception &exception){
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";
	PresidentialPardonForm three("Mike");
	john.signForm(three);
	try {
		three.execute(john);
		john.executeForm(three);
	}
	catch (std::exception &exception){
		std::cout << exception.what() << "\n";
	}
	return (0);
}