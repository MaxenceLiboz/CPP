/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:06:11 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 14:33:09 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

HumanB::~HumanB(){}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon->getType() << std::endl;
}