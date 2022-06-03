/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 09:40:14 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/20 10:04:20by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

const std::string Intern::_forms[3] = {"Robotomy request", "Presidential pardon", "Shrubbery creation"};

Intern::Intern()
{
	std::cout << GRN << "Default Intern constuctor called" << END << std::endl;
}

Intern::Intern( Intern const & src )
{ 
	*this = src;
	std::cout << GRN << "Copy Intern constuctor called" << END << std::endl;
}

Intern::~Intern()
{
	std::cout << GRN << "Intern destructor called" << END << std::endl;
}

Intern & Intern::operator=( Intern const & src )
{
	(void)src;
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Intern const & src)
{
	(void)src;
	o << "Intern his here to help you.";
	return o;
}

Form *	Intern::createRobotomyRequest(std::string target){ return (new RobotomyRequestForm(target));}
Form *	Intern::createPresidentialPardon(std::string target){ return (new PresidentialPardonForm(target));}
Form *	Intern::createShrubberyCreation(std::string target){ return (new ShrubberyCreationForm(target));}


int		Intern::getIndex( std::string name )
{
	for (int i = 0; i < 3; i++)
	{
		if (this->_forms[i] == name)
			return (i);
	}
	return (-1);
}

Form *	Intern::makeForm( std::string name, std::string target)
{
	Form *  (Intern::*f[3])(std::string target) = {&Intern::createRobotomyRequest, &Intern::createPresidentialPardon, &Intern::createShrubberyCreation};
	int index = this->getIndex(name);
	if (index == -1)
		throw(Intern::FormUnknownException());
	std::cout << "Intern creates " << name << std::endl;
	return ((this->*f[index])(target));	
}

const char * Intern::FormUnknownException::what() const throw()
{
	return ("\033[1;31mInternException: Intern don't know the form you want to create.\e[0m");
}