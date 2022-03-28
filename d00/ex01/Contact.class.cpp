/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:18:08 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/28 13:18:41 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	Contact::_set_string_attribute(std::string *attribute, std::string prompt)
{
	std::string		get;
	
	std::cout << prompt;
	while (std::getline(std::cin, get))
	{
		if (get.empty() == false) {
			attribute->assign(get);
			return ;
		}
		std::cout << prompt;
	}
	std::cout << std::endl << "Good bye !" << std::endl;
	exit(0);
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
	std::cout << "Phone number (only digits): ";
	while (std::getline(std::cin, get))
	{
		if (get.empty() == false && (get.find_first_not_of("0123456789") == std::string::npos) != false) {
			this->_phone_number.assign(get);
			return ;
		}
		std::cout << "Phone number (only digits): ";
	}
	std::cout << "Good bye !" << std::endl;
	exit(0);
}

std::string Contact::get_first_name(void) const {return(this->_first_name);}
std::string Contact::get_last_name(void) const {return(this->_last_name);}
std::string Contact::get_nickname(void) const {return(this->_nickname);}
std::string Contact::get_phone_number(void) const {return(this->_phone_number);}
std::string Contact::get_darkest_secret(void) const {return(this->_darkest_secret);}
