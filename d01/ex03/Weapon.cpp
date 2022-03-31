/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 08:59:04 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 14:42:47 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon) : _type(weapon) {}

Weapon::Weapon(): _type(std::string()){}

Weapon::~Weapon(){}

const std::string & Weapon::getType(void) const { return this->_type; }

void Weapon::setType(std::string weapon)
{
	this->_type = weapon;
}