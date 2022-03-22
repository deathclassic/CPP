/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 17:50:14 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 18:44:00 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon {
		std::string _type;
	public:
		Weapon(std::string const &);
		Weapon();
		~Weapon();

		std::string const &getType(void);
		void	setType(std::string);
};

#endif