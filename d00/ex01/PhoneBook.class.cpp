/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:55:05 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/18 10:21:33 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void) {
	this->_index = 0;
	this->_size = 0;
}

void	PhoneBook::add_contact(void) {
	if (this->_index == 8)
		this->_index = 0;
	this->_contacts[this->_index].set_first_name();
	this->_contacts[this->_index].set_last_name();
	this->_contacts[this->_index].set_nickname();
	this->_contacts[this->_index].set_phone_number();
	this->_contacts[this->_index].set_darkest_secret();
	std::cout << std::endl;
	this->_index += 1;
	if (this->_size < 8)
		this->_size += 1;
}

void	PhoneBook::_printHeader(void) const {
	
	std::cout << std::endl;
	std::cout << "|";
	_printElement("Index");
	std::cout << "|";
	_printElement("First name");
	std::cout << "|";
	_printElement("Last name");
	std::cout << "|";
	_printElement("Nickname");
	std::cout << "|";
	std::cout << std::endl;
}

void	PhoneBook::_printLine(int index) const {
	
	std::cout << "|";
	_printElement(std::to_string(index));
	std::cout << "|";
	_printElement(this->_contacts[index].get_first_name());
	std::cout << "|";
	_printElement(this->_contacts[index].get_last_name());
	std::cout << "|";
	_printElement(this->_contacts[index].get_nickname());
	std::cout << "|";
	std::cout << std::endl;
}

void	PhoneBook::_printElement(std::string element) const {
	if (element.size() > 10)
		std::cout << element.substr(0, 9) << ".";
	else
		std::cout << std::setfill(' ') << std::setw(10) << element;
}

void	PhoneBook::search_contact(void) const {
	int			index;
	std::string contact;
	int			i;

	index = 0;
	_printHeader();
	while (index < this->_size)
	{
		_printLine(index);
		index++;
	}
	index = 0;
	do {
		if (this->_size == 0)
			break ;
		if (index == 0)
			std::cout << std::endl << "Which contact you want to see in detail (index): ";
		else
			std::cout << std::endl << "Enter a valid index number: ";
		std::getline(std::cin, contact);
		std::istringstream(contact) >> i;
		std::cout << i;
		if (i == 0 && contact.compare("0") != 0)
			i = -1;
		index++;
	} while (contact.empty() == true || i + 1 > this->_size || i < 0);

	if (i >= 0  && i <= this->_size)
	{
		std::cout << this->_contacts[i].get_first_name() << std::endl;
		std::cout << this->_contacts[i].get_last_name() << std::endl;
		std::cout << this->_contacts[i].get_nickname() << std::endl;
		std::cout << this->_contacts[i].get_phone_number() << std::endl;
		std::cout << this->_contacts[i].get_darkest_secret() << std::endl;
	}
	std::cout << std::endl;
}
