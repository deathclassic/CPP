#pragma once
#include <iostream>
#include <string>

class Brain {
	protected:
	    std::string _ideas[100];
	public:
		Brain();
		Brain(std::string);
		Brain(Brain const &);
		Brain const &operator=(Brain const &);
		virtual ~Brain();
};