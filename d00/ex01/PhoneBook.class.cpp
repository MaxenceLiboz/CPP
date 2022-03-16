/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:55:05 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/16 11:31:20 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

PhoneBook::PhoneBook(void) {
	this->index = 0;
	this->size = 0;
}

void	PhoneBook::add_contact(void) {
	if (this->index == 8)
		this->index = 0;
	this->contacts[this->index].set_first_name();
	this->contacts[this->index].set_last_name();
	this->contacts[this->index].set_nickname();
	this->contacts[this->index].set_phone_number();
	this->contacts[this->index].set_darkest_secret();
	std::cout << std::endl;
	this->index += 1;
	if (this->size < 8)
		this->size += 1;
}

void	PhoneBook::printHeader(void) const {
	
	std::cout << std::endl;
	std::cout << "|";
	printElement("Index");
	std::cout << "|";
	printElement("First name");
	std::cout << "|";
	printElement("Last name");
	std::cout << "|";
	printElement("Nickname");
	std::cout << "|";
	std::cout << std::endl;
}

void	PhoneBook::printLine(int index) const {
	
	std::cout << "|";
	printElement(std::to_string(index));
	std::cout << "|";
	printElement(this->contacts[index].get_first_name());
	std::cout << "|";
	printElement(this->contacts[index].get_last_name());
	std::cout << "|";
	printElement(this->contacts[index].get_nickname());
	std::cout << "|";
	std::cout << std::endl;
}

void	PhoneBook::printElement(std::string element) const {
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
	printHeader();
	while (index < this->size)
	{
		printLine(index);
		index++;
	}
	index = 0;
	do {
		if (this->size == 0)
			break ;
		if (index == 0)
			std::cout << std::endl << "Which contact you want to see in detail (index): ";
		else
			std::cout << std::endl << "Enter a valid index number: ";
		std::getline(std::cin, contact);
		std::istringstream(contact) >> i;
		if (i == 0 && contact.compare("0") != 0)
			i = -1;
		index++;
	} while (contact.empty() == true || i + 1 > this->size || i < 0);

	if (i >= 0  && i <= this->size)
	{
		std::cout << this->contacts[i].get_first_name() << std::endl;
		std::cout << this->contacts[i].get_last_name() << std::endl;
		std::cout << this->contacts[i].get_nickname() << std::endl;
		std::cout << this->contacts[i].get_phone_number() << std::endl;
		std::cout << this->contacts[i].get_darkest_secret() << std::endl;
	}
	std::cout << std::endl;
}
