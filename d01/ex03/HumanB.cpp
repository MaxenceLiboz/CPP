/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 09:06:11 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/17 09:29:54 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name) {}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void	HumanB::attack(void) const {
	
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon->getType() << std::endl;
}