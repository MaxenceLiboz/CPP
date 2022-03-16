/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:18:08 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/16 11:34:19 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	Contact::_set_string_attribute(std::string *attribute, std::string prompt)
{
	std::string		get;
	while (get.empty() == true)
	{
		std::cout << prompt;
		std::getline(std::cin, get);
	}
	attribute->assign(get);
}

void Contact::set_first_name(void) {
	
	_set_string_attribute(&this->_first_name, "First name: ");
}

void Contact::set_last_name(void) {
	
	_set_string_attribute(&this->_last_name, "Last name: ");
}

void Contact::set_nickname(void) {
	
	_set_string_attribute(&this->_nickname, "Nickname: ");
}

void Contact::set_darkest_secret(void) {
	
	_set_string_attribute(&this->_darkest_secret, "Darkest secret: ");
}

void Contact::set_phone_number(void) {
	
	std::string		get;
	while (get.empty() == true
	|| (get.find_first_not_of("0123456789") == std::string::npos) == false)
	{
		std::cout << "Phone number (only digits): ";
		std::getline(std::cin, get);
	}
	this->_phone_number.assign(get);
}

std::string Contact::get_first_name(void) const {return(this->_first_name);}
std::string Contact::get_last_name(void) const {return(this->_last_name);}
std::string Contact::get_nickname(void) const {return(this->_nickname);}
std::string Contact::get_phone_number(void) const {return(this->_phone_number);}
std::string Contact::get_darkest_secret(void) const {return(this->_darkest_secret);}
