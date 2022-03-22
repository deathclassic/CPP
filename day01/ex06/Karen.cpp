/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:47:38 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/26 16:18:39 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::debug(void) {
	std::cout << "[ Debug ]\nI love having extra bacon for my\n" <<
	"7XL-double-cheese-triple-pickle-special- ketchup burger.\n" <<
	"I really do!\n";
}

void	Karen::info(void) {
	std::cout << "[INFO ]\nI cannot believe adding extra bacon costs more money.\n" <<
	"You didn’t put enough bacon in my burger!\n" <<
	"If you did, I wouldn’t be asking for more!\n";
}

void	Karen::warning(void) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\n" <<
	"I’ve been coming for years whereas you started\n" <<
	"working here since last month.\n";
}

void	Karen::error(void) {
	std::cout << "[ Error ]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void	Karen::complain(std::string level) {
	int i = 0;
	method_ptr ptr[] = {&Karen::debug, &Karen::info, \
		&Karen:: warning, &Karen::error};
	bool	cmd[] = {level == "debug", level == "info", \
		level == "warning", level == "error"};
	while(!cmd[i])
		i++;
	switch (i) {
		case 0:
			(this->*ptr[0])();
		case 1:
			(this->*ptr[1])();
		case 2:
			(this->*ptr[2])();
		case 3:
			(this->*ptr[3])();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
