/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:01:17 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 18:15:29 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weaponA(weapon) {}

HumanA::~HumanA(void) {}

void	HumanA::attack(void) {
	std::cout << _name << " attacks with his " << _weaponA.getType() << "\n";
}