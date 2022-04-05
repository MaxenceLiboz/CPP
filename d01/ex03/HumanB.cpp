/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:06:11 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/05 10:32:16 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void) const
{
	if (this->weapon != NULL)
	{
		std::cout << this->name << " attacks with their ";
		std::cout << this->weapon->getType() << std::endl;
	}
	else
		std::cout << this->name << " doesn't have a weapon to attack" << std::endl;	
}