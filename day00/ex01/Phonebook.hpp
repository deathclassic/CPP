/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:40:13 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/23 16:14:27 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <iomanip>
# include <string>

class Phonebook {
		int		id;
		Contact	person[8];
		void	print_info(Contact &person) const;
	public:
		Phonebook();
		void	add();
		void	search();
};

#endif