/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:27:33 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 16:23:24 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("unknown") {}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << _name << " has risen from the grave..\n";
}

Zombie::~Zombie(void) {
	std::cout << _name << " died from a shotgun wound... ouch\n";
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::set_name(std::string name) {
	_name = name;
}
