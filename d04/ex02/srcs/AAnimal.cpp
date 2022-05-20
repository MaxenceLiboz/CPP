/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 14:22:33 by maxencelibo       #+#    #+#             */
/*   Updated: 2022/05/18 15:48:14 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AAnimal.hpp"
# include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal() : type("Default")
{
	std::cout << GRN << "Default Animal constructor called" << END << std::endl;
}

AAnimal::AAnimal( std::string type ) : type(type)
{
	std::cout << GRN << "String type Animal constructor called" << END << std::endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	*this = src;
	std::cout << GRN << "Copy Animal constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
	std::cout << RED << "Default Animal destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AAnimal &				AAnimal::operator=( AAnimal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AAnimal const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	AAnimal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string & AAnimal::getType() const { return (this->type); }

/* ************************************************************************** */