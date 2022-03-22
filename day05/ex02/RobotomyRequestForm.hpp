#include "Form.hpp"
#include <ctime>
#pragma once

class RobotomyRequestForm : public Form {
	private:
		std::string	_target;
	public:
		RobotomyRequestForm(std::string);
		RobotomyRequestForm(RobotomyRequestForm const &);
		~RobotomyRequestForm();

	void	execute(const Bureaucrat &) const;
};