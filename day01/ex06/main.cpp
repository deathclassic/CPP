/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:08:46 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/26 15:13:01 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char **argv) {
	Karen karen;

	if (argc != 2) {
		std::cerr << "Error: invalid input\n";
		exit (1);
	}
	std::string level = argv[1];
	karen.complain(level);
	return 0;
}