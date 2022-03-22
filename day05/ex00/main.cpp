#include "Bureaucrat.hpp"

int main(void) {
	try {
		Bureaucrat john("John", 10);
		std::cout << john << "\n";
		john.gradeIncrease();
		std::cout << john << "\n";
		john.gradeDecrease();
		std::cout << john << "\n";
	}
	catch (std::exception &exception) {
		std::cout << "this message won't be printed\n";
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";
	try {
		Bureaucrat unknown("Mike", 1);
		Bureaucrat mike = unknown;
		std::cout << mike << "\n";
		mike.gradeIncrease();
		std::cout << "this message won't be printed\n";
		std::cout << "lol lol\n";
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";
	try {
		Bureaucrat someone("Leo", 150);
		Bureaucrat leo(someone);
		std::cout << leo << "\n";
		leo.gradeDecrease();
		std::cout << "this message won't be printed\n";
		std::cout << "lol lol\n";
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << "\n";
	}
	return (0);
}