/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:16:03 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/24 19:23:20 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	int	i = 1;
	int	j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		while (argv[i]) {
			j = 0;
			while (argv[i][j]) {
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
					std::cout << static_cast<char>(argv[i][j] - 32);
				else
					std::cout << static_cast<char>(argv[i][j]);
				j++;
			}
			i++;
			if (argv[i] && strlen(argv[i]))
				std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return 0;
}