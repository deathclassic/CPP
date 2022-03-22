/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:33:47 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/26 15:25:17 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Karen {
	public:
		Karen();
		~Karen();

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	complain(std::string);
};

typedef void (Karen::*method_ptr)(void);
