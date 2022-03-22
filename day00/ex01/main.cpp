/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:39:22 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/23 16:14:38 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main(void) {
	std::string cmd;
	Phonebook	book;
	
	std::cout << "Available commands: \"ADD\", \"SEARCH\", \"EXIT\"" << std::endl;
	while(std::getline(std::cin, cmd)) {
		if (cmd == "EXIT" || cmd == "exit")
			return 0;
		else if (cmd == "ADD" || cmd == "add")
			book.add();
		else if (cmd == "SEARCH" || cmd == "search")
			book.search();
		else
			std::cout << "Phonebook: Command not found: " << cmd << std::endl;
		std::cout << "Available commands: \"ADD\", \"SEARCH\", \"EXIT\"" << std::endl;
	}
	return (0);
}