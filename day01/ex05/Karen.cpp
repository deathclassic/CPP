/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:47:38 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/26 15:52:13 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {}

Karen::~Karen() {}

void	Karen::debug(void) {
	std::cout << "Debug: I love having extra bacon for my\n" <<
	"7XL-double-cheese-triple-pickle-special- ketchup burger.\n" <<
	"I really do!\n";
}

void	Karen::info(void) {
	std::cout << "Info: I cannot believe adding extra bacon costs more money.\n" <<
	"You didn’t put enough bacon in my burger!\n" <<
	"If you did, I wouldn’t be asking for more!\n";
}

void	Karen::warning(void) {
	std::cout << "Warning: I think I deserve to have some extra bacon for free.\n" <<
	"I’ve been coming for years whereas you started\n" <<
	"working here since last month.\n";
}

void	Karen::error(void) {
	std::cout << "Error: This is unacceptable! I want to speak to the manager now.\n";
}

void	Karen::complain(std::string level) {
	method_ptr ptr[] = {&Karen::debug, &Karen::info, \
		&Karen:: warning, &Karen::error};
	bool	cmd[] = {level == "debug", level == "info", \
		level == "warning", level == "error"};
	for (int i = 0; i < 4; i++)
		if (cmd[i])
			(this->*ptr[i])();
}
