/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:20:37 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/20 08:54:06 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default")
{
	this->_grade = 150;
	std::cout << BLU << "Default Bureaucrat constuctor called" << END << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name(src._name)
{
	*this = src;
	std::cout << BLU << "Copy Bureaucrat constuctor called" << END << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ) : _name(name)
{
	if (grade > 150)
		throw(Bureaucrat::GradeToLowException());
	else if (grade < 1)
		throw(Bureaucrat::GradeToHighException());
	this->_grade = grade;
	std::cout << BLU << "Bureaucrat constuctor called" << END << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Bureaucrat destuctor called" << END << std::endl;
}

void	Bureaucrat::setGrade( int new_grade )
{
	if (new_grade > 150)
		throw(Bureaucrat::GradeToLowException());
	else if (new_grade < 1)
		throw(Bureaucrat::GradeToHighException());
	this->_grade = new_grade;
}

const std::string	Bureaucrat::getName () const { return (this->_name); }
int					Bureaucrat::getGrade () const { return (this->_grade); }

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw (Bureaucrat::GradeToHighException());
	this->_grade -= 1;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw (Bureaucrat::GradeToLowException());
	this->_grade += 1;
}

void	Bureaucrat::signForm( Form & form )
{
	if (form.getSignGrade() >= this->getGrade() && form.getSigned() == false)
	{
		form.beSigned( *this );
		std::cout << this->getName() << " signed " << form.getName() << "." << std::endl;
	}
	else if (form.getSigned() == true)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName();
		std::cout << " because the form is already signed." << std::endl;
	}
	else
	{
		std::cout << this->getName() << " couldn't sign " << form.getName();
		std::cout << " because the form needs a bureaucrat grade ";
		std::cout << form.getSignGrade() << " and " << this->getName() << " is only grade ";
		std::cout << this->getGrade() << "." << std::endl;
	}
}

void	Bureaucrat::executeForm( Form const & form )
{
	if (form.getSigned() == false)
	{
		std::cout << this->getName() << " couldn't execute " << form.getName();
		std::cout << " because for is " << RED << "not signed." << END << std::endl;
	}
	else if (form.getExecGrade() < this->getGrade())
	{
		std::cout << this->getName() << " couldn't execute " << form.getName();
		std::cout << " because his/her grade is to low." << std::endl;
	}
	else
	{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & src )
{
	this->_grade = src._grade;
	return *this;
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & src )
{
	o << src.getName() << ", bureaucrat gade is " << src.getGrade() << std::endl;
	return o;
}

const char* Bureaucrat::GradeToLowException::what() const throw()
{
	return ("\033[1;31mBureaucratException: Grade to low\e[0m");
}

const char* Bureaucrat::GradeToHighException::what() const throw()
{
	return ("\033[1;31mBureaucratException: Grade to high\e[0m");
}