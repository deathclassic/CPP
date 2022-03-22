/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:33:14 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/26 13:33:01 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	error_message(void) {
	std::cerr << "Error: Invalid input\n";
	exit (1) ;
}

int main(int argc, char **argv) {
	if (argc != 4)
		error_message();
	std::string name = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::string tmp;
	int			pos;

	if (!s1.length() || !s2.length())
		error_message();
	std::ifstream infile(name);
	std::ofstream outfile(name + ".replace");
	if (!infile || !outfile)
		error_message();
	while(getline(infile, tmp)) {
		if ((pos = tmp.find(s1)) != -1) {
			tmp.erase(pos, s1.length());
			tmp.insert(pos, s2);
			outfile << tmp << '\n';
		}
		else
			outfile << tmp << '\n'; 
	}
	infile.close();
	outfile.close();
	exit (0);
}