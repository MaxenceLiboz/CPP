/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:23:28 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/15 11:25:25 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	PhoneBook 	phonebook;
	std::string	line;
	bool		redo;

	redo = false;
	while (line.compare("EXIT") != 0)
	{
		if (redo == false)
		{
			std::cout << std::setfill('-') << std::setw(80) << " " << std::endl;
			std::cout << "ADD: add a contact | SEARCH: search a contact | ";
			std::cout << "EXIT: exit the program" << std::endl;
			std::cout << std::endl;
			std:: cout << "Input: ";
		}
		else
			std:: cout << "Wrong input try again: ";
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
		{
			redo = false;
			phonebook.add_contact();
		}
		else if (line.compare("SEARCH") == 0)
		{
			redo = false;
			phonebook.search_contact();
		}
		else
			redo = true;
	}
}
