#include "Form.hpp"
#pragma once

class PresidentialPardonForm : public Form {
	private:
		std::string	_target;
	public:
		PresidentialPardonForm(std::string);
		PresidentialPardonForm(PresidentialPardonForm const &);
		~PresidentialPardonForm();

	void	execute(const Bureaucrat &) const;
};