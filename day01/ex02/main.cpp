/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:16:54 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 17:37:57 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string &stringREF = str;
	std::string *stringPTR = &str;

	std::cout << "Memory address of the str:\t" << &str << "\n";
	std::cout << "Memory address held by ptr:\t" << stringPTR << "\n";
	std::cout << "Memory address held by ref:\t" << &stringREF << "\n";
	std::cout << "\n";
	std::cout << "Value of the str:\t\t" << str << "\n";
	std::cout << "Value pointed to by ptr:\t" << *stringPTR << "\n";
	std::cout << "Value pointed to by ptr:\t" << stringREF << "\n";

	return (0);
}