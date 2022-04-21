/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:19:20 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/06 10:35:40 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(int argc, char **argv)
{
	std::string arg;
	if (argc != 2)
	{
		std::cout << "Enter a test: [all, constructor]" << std::endl;
		return (0);
	}

	arg.assign(argv[1]);
	if (arg.compare("constructor") == 0)
	{
		FragTrap Max("Max");
		std::cout << Max;
	}
	else if (arg.compare("all") == 0)
	{
		ClapTrap Max("Max");
		ClapTrap Theo("Theo");
		ClapTrap Copy = Theo;

		std::cout << Max << Theo << Copy << std::endl;
		Max.attack("Theo");
		Theo.takeDamage(Max.getAttackDamage());
		std::cout << Theo << std::endl;
		Theo.beRepaired(10);
		std::cout << Theo << std::endl;
		
		Max.takeDamage(5);
		std::cout << Max << std::endl;
		Max.beRepaired(10);
		std::cout << Max << std::endl;

		Theo.takeDamage(5);
		std::cout << Theo << std::endl;

		for (int i = 0; i < 8; i++)
			Max.beRepaired(1);
		std::cout << Max;
		Max.beRepaired(1);
		std::cout << Max << std::endl;

		ClapTrap Copy2(Copy);
		
		ScavTrap Anas("Anas");
		ClapTrap Arthur("Arthur");

		std::cout << Anas << Arthur << std::endl;
		Anas.attack("Arthur");
		Arthur.takeDamage(Anas.getAttackDamage());
		std::cout << Anas << Arthur << std::endl;

		Anas.guardGate();

		FragTrap Paul("Paul");
		std::cout << Paul;
		Anas.attack("Paul");
		Paul.takeDamage(Anas.getAttackDamage());
		std::cout << Anas << Paul << std::endl;

		Paul.highFiveGuys();
	}

	return (0);
}