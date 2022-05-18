#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal() : type("Default")
{
	std::cout << GRN << "Default WrongAnimal constructor called" << END << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
	std::cout << GRN << "String type WrongAnimal constructor called" << END << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	*this = src;
	std::cout << GRN << "Copy WrongAnimal constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "Default WrongAnimal destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &				WrongAnimal::operator=( WrongAnimal const & rhs )
{
	this->type = rhs.type;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string & WrongAnimal::getType() const { return (this->type); }


/* ************************************************************************** */