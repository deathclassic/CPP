/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:54:36 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 18:27:45 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const &type) : _type(type) {}

Weapon::Weapon(void) {}

Weapon::~Weapon(void) {}

std::string const &Weapon::getType(void) {
	return (_type);
}

void	Weapon::setType(std::string type) {
	_type = type;
}