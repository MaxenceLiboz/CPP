/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:19:20 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/18 13:17:57 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
		DiamondTrap Max("Max");
		std::cout << Max;
	}
	else if (arg.compare("all") == 0)
	{
		ScavTrap Anas("Anas");
		DiamondTrap leo("Leo");
		std::cout << leo << std::endl;
		leo.attack("Anas");
		Anas.takeDamage(leo.getAttackDamage());
		std::cout << Anas << leo << std::endl;

		leo.guardGate();
		leo.highFiveGuys();
		leo.whoAmI();
	}

	return (0);
}