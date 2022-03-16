/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:10:48 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/16 11:24:19 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "main.hpp"

class Contact {

	public:

		void set_first_name(void);
		std::string get_first_name(void) const;
		
		void set_last_name(void);
		std::string get_last_name(void) const;
		
		void set_nickname(void);
		std::string get_nickname(void) const;
		
		void set_phone_number(void);
		std::string get_phone_number(void) const;
		
		void set_darkest_secret(void);
		std::string get_darkest_secret(void) const;

	private:
	
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string	_phone_number;
		std::string _darkest_secret;
		void _set_string_attribute(std::string *attribute, std::string prompt);
};



#endif