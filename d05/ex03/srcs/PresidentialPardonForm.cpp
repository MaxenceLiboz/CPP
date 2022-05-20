/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:38:32 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/19 15:59:08 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Default", 25, 5), _target("default")
{
	std::cout << GRN << "Default PresidentialPardonForm constuctor called" << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : Form(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src._target)
{
	*this = src;
	std::cout << GRN << "Copy PresidentialPardonForm constuctor called" << END << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon Form", 72, 45), _target(target)
{
	std::cout << GRN << "PresidentialPardonForm constuctor called" << END << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "PresidentialPardonForm destructor called" << END << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & src )
{
	(void)src;
	return *this;
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblerox." << std::endl;
}