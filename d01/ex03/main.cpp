/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:55:41 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 14:41:25 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define END "\033[0m"

int main()
{
	std::cout << GREEN << "[ Creating a weapon name \'crude spiked club\' ]" << END << std::endl;
	Weapon club = Weapon("crude spiked club");
	std::cout << GREEN << "[ Creating an object of HumanA name Bob with the club ]" << END << std::endl;
	HumanA bob("Bob", club);
	bob.attack();
	std::cout << GREEN << "[ Change the weapon (club) type by \'some other type of club\' ]" << END << std::endl;
	club.setType("some other type of club");
	bob.attack();
	
	std::cout << std::endl;
	std::cout << GREEN << "[ Creating a weapon (club1) name \'crude spiked club\' ]" << END << std::endl;
	Weapon club1 = Weapon("crude spiked club");
	std::cout << GREEN << "[ Creating an object of HumanB name Jim]" << END << std::endl;
	HumanB jim("Jim");
	std::cout << GREEN << "[ Set the weapon to club1]" << END << std::endl;
	jim.setWeapon(club1);
	jim.attack();
	std::cout << GREEN << "[ Change the weapon (club1) type by \'some other type of club\' ]" << END << std::endl;
	club1.setType("some other type of club");
	jim.attack();
	return (0);
}