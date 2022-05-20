/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:33:09 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/20 08:47:24 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Form"), _signGrade(140), _execGrade(150)
{
	this->_signed = false;
	std::cout << GRN << "Default Form constuctor called" << END << std::endl;
}

Form::Form( Form const & src ) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	*this = src;
	std::cout << GRN << "Copy Form constuctor called" << END << std::endl;
}

Form::Form( std::string name, int signGrade, int execGrade ) : _name(name), _signGrade(signGrade), _execGrade(execGrade)
{
	if (signGrade < 1 || execGrade < 1)
		throw(Form::GradeToHighException());
	if (signGrade > 150 || execGrade > 150)
		throw(Form::GradeToLowException());
	this->_signed = false;
	std::cout << GRN << "Form constuctor called" << END << std::endl;
}

Form::~Form()
{
	std::cout << GRN << "Form destructor called" << END << std::endl;
}

Form & Form::operator=( Form const & src )
{
	this->_signed = src.getSigned();
	return *this;
}

std::ostream &	operator<<( std::ostream & o, Form const & src)
{
	o << "Form " << src.getName() << " need a Bureaucrat grade ";
	o << src.getExecGrade() << " to get executed, and grade ";
	o << src.getSignGrade() << " to get signed. Moreover this form is ";
	src.getSigned() == true ? o << GRN << "already signed." << END : o << RED << "not signed." << END;
	o << std::endl;
	return o;
}

const std::string 	Form::getName() const { return(this->_name); }
int					Form::getSignGrade() const { return(this->_signGrade); }
int					Form::getExecGrade() const { return(this->_execGrade); }
bool				Form::getSigned() const { return(this->_signed); }

void	Form::beSigned( Bureaucrat & src)
{
	if (src.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw(Form::GradeToLowException());
}

void	Form::execute( Bureaucrat const & executor ) const
{
	if (this->getSigned() == false)
		throw (Form::FormNotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw (Form::GradeToLowException());
}

const char* Form::GradeToLowException::what() const throw()
{
	return ("\033[1;31mFormException: Grade to low\e[0m");
}

const char* Form::GradeToHighException::what() const throw()
{
	return ("\033[1;31mFormException: Grade to high\e[0m");
}

const char* Form::FormNotSignedException::what() const throw()
{
	return ("\033[1;31mFormException: form not signed yet.\e[0m");
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return ("\033[1;31mFormException: form already signed.\e[0m");
}