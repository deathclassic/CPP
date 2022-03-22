/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 17:23:10 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/23 16:14:44 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static bool check_nbr(std::string nbr) {
	for (size_t i = 0; i < nbr.length(); i++)
		if ((nbr[i] >= 'a' && nbr[i] <= 'z') || (nbr[i] >= 'A' && nbr[i] <= 'Z'))
			return (false);
	return (true);
}

void	Contact::set_contact_value(std::string data_type){
	std::string tmp;
	
	std::getline(std::cin, tmp);
	if (data_type == "NAME") {
		while (!tmp.length()) {
			std::cout << "Error: first name field can't be empty\n";
			std::getline(std::cin, tmp);
		}
		first_name = tmp;
	}
	else if (data_type == "SURNAME")
		last_name = tmp;
	else if (data_type == "NICKNAME")
		nickname = tmp;
	else if (data_type == "NUMBER"){
		while (!tmp.length() || !check_nbr(tmp)) {
			if(!tmp.length())
				std::cout << "Error: phone number field can't be empty\n";
			else 
				std::cout << "Error: invalid number\n";
			std::getline(std::cin, tmp);
		}
		number = tmp;
	}
	else if (data_type == "SECRET")
		secret = tmp;
}

std::string	Contact::get_contact_value(std::string data_type) {
	if (data_type == "NAME")
		return (Contact::first_name);
	else if (data_type == "SURNAME")
		return(Contact::last_name);
	else if (data_type == "NICKNAME")
		return(Contact::nickname);
	else if (data_type == "NUMBER")
		return(Contact::number);
	else if (data_type == "SECRET")
		return(Contact::secret);
	else
		return ("NULL");
}