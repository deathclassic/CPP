/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:26:15 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/26 16:26:48 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie *horde = zombieHorde(7, "Bob");
	for (int i = 0; i < 7; i++)
		horde[i].announce();
	delete [] horde;
	return 0;
}