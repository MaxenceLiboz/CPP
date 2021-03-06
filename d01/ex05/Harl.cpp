/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:41:23 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 15:05:21 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string Harl::_table[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

Harl::Harl(){}
Harl::~Harl(){}

void	Harl::_debug(void) const{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout << "I really do!" << std::endl;
}

void	Harl::_info(void) const{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void) const{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started ";
	std::cout << "working here since last month." << std::endl;
}

void	Harl::_error(void) const{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {

 	int		index;
	void	(Harl::*f[4])(void) const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	
	index = std::distance(_table, std::find(_table, _table + 4, level));
	if (index >= 0 && index <= 3)
		(this->*f[index])();		
};
