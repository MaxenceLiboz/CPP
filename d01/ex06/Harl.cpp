/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:41:23 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 15:20:27 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string Harl::_table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl(){}
Harl::~Harl(){}

void	Harl::_debug(void) const{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl << std::endl;
}

void	Harl::_info(void) const{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void	Harl::_warning(void) const{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl << std::endl;
}

void	Harl::_error(void) const{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::_off(void) const{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void	Harl::complain(std::string level)
{
 	int		index;
	
	index = std::distance(_table, std::find(_table, _table + 4, level));
	index += 1;
	switch (index)
	{
	case 1:
		this->_debug();
	case 2:
		this->_info();
	case 3:
		this->_warning();
	case 4:
		this->_error();
		break;
	default:
		this->_off();
		break;
	}
};
