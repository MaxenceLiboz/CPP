/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 13:38:44 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/17 15:43:21 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv) {
	Harl	harl;

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
		std::cout << argv[1] << ": ";
		harl.complain(argv[1]);
	}
	return (0);
}