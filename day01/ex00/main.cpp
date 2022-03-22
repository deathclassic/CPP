/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:26:56 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 16:03:19 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void) {
	Zombie zomb("Huggy Wuggy");
	zomb.announce();
	randomChump("Nosferatu");
	
	// Zombie *andrew = newZombie("Andrew");
	// andrew->announce();
	// delete(andrew);
	// std::cout << "the end\n";
	return 0;
}