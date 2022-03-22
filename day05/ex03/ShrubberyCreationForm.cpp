#include "ShrubberyCreationForm.hpp"

//constructor

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) :
	Form (copy.getName(), copy.getGradeToSign(), copy.getGradeToExecute()),
	_target(copy._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

//methods

void	ShrubberyCreationForm::execute(const Bureaucrat &ref) const {
	std::ofstream	outfile;
	std::string		fname;

	if (ref.getGrade() <= getGradeToExecute() && getIsSigned()) {
		fname = _target + "_shrubbery";
		outfile.open(fname);
		outfile << "          \\/ |    |/\n";
		outfile << "       \\/ / \\||/  /_/___/_\n";
		outfile << "        \\/   |/ \\/\n";
		outfile << "   _\\__\\_\\   |  /_____/_\n";
		outfile << "         \\  | /          /\n";
		outfile << " __ _-----`  |{,-----------~\n";
		outfile << "           \\ }{\n";
		outfile << "            }{{\n";
		outfile << "            }{{\n";
		outfile << "            }{{\n";
		outfile << "      , -=-~{ .-^- _\n";
		outfile.close();
	}
	else if (!getIsSigned())
		throw (Bureaucrat::UnsignedFormException());
	else
		throw (Bureaucrat::GradeTooLowException());
}