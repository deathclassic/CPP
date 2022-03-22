/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:47:39 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 18:49:27 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &weapon) {
	_WeaponB = &weapon;
}

void	HumanB::attack(void) {
	std::cout << _name << " attacks with their " << _WeaponB->getType() << "\n";
}