/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:02:40 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/25 16:25:08 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

class Zombie {
		std::string _name;
	public:
		Zombie(std::string);
		Zombie();
		~Zombie();
		void	announce(void);
		void	set_name(std::string);
};

Zombie *zombieHorde(int N, std::string name);
void	randomChump(std::string name);

#endif
