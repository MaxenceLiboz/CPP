/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 10:23:28 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/14 13:28:16 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int	main(void)
{
	PhoneBook 	phonebook;
	std::string	line;

	while (line.compare("EXIT") != 0)
	{
		std::cout << std::setfill('-') << std::setw(80) << " " << std::endl;
		std::cout << "ADD: add a contact | SEARCH: search a contact | ";
		std::cout << "Exit: exit the program" << std::endl;
		std::cout << std::endl;
		std:: cout << "Input: ";
		std::getline(std::cin, line);
		if (line.compare("ADD") == 0)
			phonebook.add_contact();
		if (line.compare("SEARCH") == 0)
			phonebook.search_contact();
	}
}
