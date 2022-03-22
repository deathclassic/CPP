/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 15:19:03 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/23 16:14:33 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() {
	id = 0;
}

void	Phonebook::print_info(Contact &person) const {
	std::cout << "First name:\t" << person.get_contact_value("NAME") << std::endl;
	std::cout << "Last name:\t" << person.get_contact_value("SURNAME") << std::endl;
	std::cout << "Nickname:\t" << person.get_contact_value("NICKNAME") << std::endl;
	std::cout << "Phone number:\t" << person.get_contact_value("NUMBER") << std::endl;
	std::cout << "Darkest secret:\t" << person.get_contact_value("SECRET") << std::endl;
}

void	Phonebook::add(void) {
	std::cout << "Enter contact's first name:\n";
	person[id].set_contact_value("NAME");
	
	std::cout << "Enter contact's last name:\n";
	person[id].set_contact_value("SURNAME");
	
	std::cout << "Enter contact's nickname:\n";
	person[id].set_contact_value("NICKNAME");
	
	std::cout << "Enter contact's phone number:\n";
	person[id].set_contact_value("NUMBER");
	
	std::cout << "Enter contact's darkest secret:\n";
	person[id].set_contact_value("SECRET");
	
	id++;
	if (id >= 8)
		id = 0;
}

static std::string adjust_len(std::string str) {
	if (str.length() >= 10) {
		str.replace(9, 1, 1, '.');
		str.resize(10);
	}
	return (str);
}

void	Phonebook::search(void){
	std::string tmp;

	if (!person[0].get_contact_value("NAME").length()) {
		std::cout << "Phonebook is empty\n";
		return ;
	}
	std::cout << "|" << std::setw(10) << "INDEX";
	std::cout << "|" << std::setw(10) << "FIRST NAME";
	std::cout << "|" << std::setw(10) << "LAST NAME";
	std::cout << "|" << std::setw(10) << "NICKNAME" << "|\n";
	for (int i = 0; i < 8; i++) {
		if (person[i].get_contact_value("NAME").length()) {
			std::cout << "|" << std::setw(10) << i + 1;
			std::cout << "|" << std::setw(10) << adjust_len(person[i].get_contact_value("NAME"));
			std::cout << "|" << std::setw(10) << adjust_len(person[i].get_contact_value("SURNAME"));
			std::cout << "|" << std::setw(10) << adjust_len(person[i].get_contact_value("NICKNAME")) << "|\n";
		}
	}
	while (true) {
		std::cout << "Enter a contact's index to get full information\n";
		std::getline(std::cin, tmp);
		int i = std::atoi(tmp.c_str()) - 1;
		if (i < 0 || i > 7) {
			std::cout << "Error: invalid index\n";
			continue ;
		}
		else {
			if (!person[i].get_contact_value("NAME").length())
				std::cout << "Error: contact does not exist\n";
			else {
				print_info(person[i]);
				return ;
			}
		}
	}
}