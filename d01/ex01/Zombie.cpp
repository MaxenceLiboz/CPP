/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 13:39:36 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/17 09:02:39 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name){
	std::cout << this->_name << ": comes to life" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << ": died" << std::endl;
}

void	Zombie::setName(std::string name) {
	
	this->_name = name;
	std::cout << this->_name << ": comes to life" << std::endl;
}

void	Zombie::announce(void) const {
	
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
