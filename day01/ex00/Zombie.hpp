/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:02:40 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 15:43:23 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif
