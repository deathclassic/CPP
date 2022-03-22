#include "Bureaucrat.hpp"
#include "Form.hpp"

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
		Form a("a", 100, 0);
		std::cout << "this message won't be printed\n";
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";

	try {
		Form b("b", 0, 100);
		std::cout << "this message won't be printed\n";
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";

	try {
		Form c("c", 100, 151);
		std::cout << "this message won't be printed\n";
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";

	try {
		Form d("d", 151, 100);
		std::cout << "this message won't be printed\n";
	}
	catch (std::exception &exception) {
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";

	try {
		Form e("e", 100, 100);
		std::cout << e << '\n';
		std::cout << "this message will be be printed\n";
	}
	catch (std::exception &exception) {
		std::cout << "this message won't be printed\n";
		std::cout << exception.what() << "\n";
	}
	std::cout << "\n";

	Bureaucrat mike("Mike", 2);
	Form a("a", 30, 25);
	mike.signForm(a);
	std::cout << a << "\n";
	std::cout << "\n";

	Bureaucrat josh("Josh", 100);
	Form b("b", 30, 25);
	josh.signForm(a);
	josh.signForm(b);
	std::cout << b << "\n";
	return (0);
}