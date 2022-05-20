/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:38:32 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/20 08:47:37 by mliboz           ###   ########.fr       */
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

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);

	std::cout << "BZZZZZZZZZZZZ BZZZZZZZZZZZZ ..." << std::endl;
	std::cout << "BZZZZZZZZZZZZ BZZZZZZZZZZZZ ..." << std::endl;

	srand((unsigned int)time(NULL));
	int worked = rand() % 2;
	std::cout << worked << std::endl;
	if (worked == 1)
		std::cout << this->_target << " has been robotomized!" << std::endl;
	else
		std::cout << this->_target << " robotomization has failed..." << std::endl;
}