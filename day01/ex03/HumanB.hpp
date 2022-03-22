/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:05:58 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 18:48:27 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB {
		std::string _name;
		Weapon		*_WeaponB;
	public:
		HumanB(std::string);
		~HumanB();
		void	setWeapon(Weapon &);
		void	attack(void);
};

#endif