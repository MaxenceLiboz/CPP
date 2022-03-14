/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:18:08 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/14 13:34:09 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"


void	Contact::create_contact(void)
{
	set_attribute(&this->first_name, "First name: ");
	set_attribute(&this->last_name, "Last name: ");
	set_attribute(&this->nickname, "Nickname: ");
	set_attribute(&this->phone_number, "Phone number: ");
	set_attribute(&this->darkest_secret, "Darkest secret: ");
}

void	Contact::set_attribute(std::string *attribute, std::string prompt)
{
	std::string		get;
	while (get.empty() == true)
	{
		std::cout << prompt;
		std::getline(std::cin, get);
	}
	attribute->assign(get);
}