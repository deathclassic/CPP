/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcharmel <tcharmel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:48:03 by tcharmel          #+#    #+#             */
/*   Updated: 2022/01/23 13:38:07 by tcharmel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact{
		std::string	first_name;
		std::string	last_name;
		std::string nickname;
		std::string number;
		std::string secret;
	public:
		void		set_contact_value(std::string);
		std::string	get_contact_value(std::string);
};

#endif