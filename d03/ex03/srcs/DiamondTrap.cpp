/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 08:59:43 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/24 14:57:58 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("_clap_name")
{
	this->_name = "Default";
	this->_hitPoint = FragTrap::setHitPoint();
	this->_energyPoint = ScavTrap::setEnergyPoint();
	this->_attackDamage = FragTrap::setAttackDamage();
	std::cout << BBlue << "DiamondTrap default constructor called" << END << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << BRed << "DiamondTrap default destructor called" << END << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	this->_hitPoint = FragTrap::setHitPoint();
	this->_energyPoint = ScavTrap::setEnergyPoint();
	this->_attackDamage = FragTrap::setAttackDamage();
	std::cout << BBlue << "DiamondTrap string constructor called" << END << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src)
{
	*this = src;
	std::cout << BBlue << "DiamondTrap Copy constructor called" << END << std::endl;
}

DiamondTrap &	DiamondTrap::operator=( DiamondTrap const & rhs )
{
	this->_name = rhs._name;
	this->_energyPoint = rhs._energyPoint;
	this->_hitPoint = rhs._hitPoint;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI() const
{
	if (this->_hitPoint > 0)
	{
		std::cout << "Hello my DiamonTrap name is " << this->_name;
		std::cout << " and my ClapTrap name is " << ClapTrap::getName() << std::endl;
	}
}

std::ostream	&	operator<<( std::ostream & o, DiamondTrap const & rhs )
{
	o << "DiamondTrap " << rhs.getName() << "\thave " << rhs.getHitPoint() << " hit points";
	o << ", " << rhs.getEnergyPoint() << " energy points, " << rhs.getAttackDamage();
	o << " attack damage." << std::endl;
	return o;	
}