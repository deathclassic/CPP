#include "Form.hpp"
#include <fstream>
#pragma once

class ShrubberyCreationForm : public Form {
	private:
		std::string	_target;
	public:
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(ShrubberyCreationForm const &);
	~ShrubberyCreationForm();

	void	execute(const Bureaucrat &) const;
};