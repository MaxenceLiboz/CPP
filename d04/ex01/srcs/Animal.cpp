/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maxenceliboz <maxenceliboz@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:22:33 by maxencelibo       #+#    #+#             */
/*   Updated: 2022/04/08 14:23:49 by maxencelibo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"
# include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("Default")
{
	std::cout << GRN << "Default Animal constructor called" << END << std::endl;
}

Animal::Animal( std::string type ) : type(type)
{
	std::cout << GRN << "String type Animal constructor called" << END << std::endl;
}

Animal::Animal( const Animal & src )
{
	*this = src;
	std::cout << GRN << "Copy Animal constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
	std::cout << RED << "Default Animal destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Animal &				Animal::operator=( Animal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Animal const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string & Animal::getType() const { return (this->type); }

/* ************************************************************************** */