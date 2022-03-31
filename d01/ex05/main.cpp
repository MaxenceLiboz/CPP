/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:38:44 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 09:13:08 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;
	const	std::string table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	if (argc != 2) {
		std::cout << "DEBUG: ";
		harl.complain("DEBUG");
		std::cout << std::endl << "INFO: ";
		harl.complain("INFO");
		std::cout << std::endl << "WARNING: ";
		harl.complain("WARNING");
		std::cout << std::endl << "ERROR: ";
		harl.complain("ERROR");
	}
	else {
		if (std::distance(table, std::find(table, table + 4, argv[1])) < 4)
		{
			std::cout << argv[1] << ": ";
			harl.complain(argv[1]);
		}
		else
			std::cout << "Enter a valid argument: [DEBUG, INFO, WARNING, ERROR]" << std::endl;
	}
	return (0);
}