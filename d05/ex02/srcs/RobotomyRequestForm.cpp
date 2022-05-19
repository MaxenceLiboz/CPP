/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:38:32 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/19 16:03:49 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Default", 72, 45), _target("default")
{
	std::cout << GRN << "Default RobotomyRequestForm constuctor called" << END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : Form(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src._target)
{
	*this = src;
	std::cout << GRN << "Copy RobotomyRequestForm constuctor called" << END << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target) : Form("Robotomy Request Form", 72, 45), _target(target)
{
	std::cout << GRN << "RobotomyRequestForm constuctor called" << END << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "RobotomyRequestForm destructor called" << END << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & src )
{
	(void)src;
	return *this;
}