/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:49:14 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 18:45:15 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_HPP
# define HUMANA_HPP

class HumanA {
		std::string _name;
		Weapon &_weaponA;
	public:
		HumanA(std::string, Weapon &);
		~HumanA();
		void	attack(void);
};

#endif 