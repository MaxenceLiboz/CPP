#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << YEL << "Default WrongCat constructor called" << END << std::endl;

}

WrongCat::WrongCat( const WrongCat & src )
{
	*this = src;
	std::cout << YEL << "Copy WrongCat constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << MAG << "WrongCat destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &				WrongCat::operator=( WrongCat const & rhs )
{
	this->type = rhs.type;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, WrongCat const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	WrongCat::makeSound() const
{
	std::cout << "MEOWWWWW" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */