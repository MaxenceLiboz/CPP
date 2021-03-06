#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	std::cout << YEL << "Default Cat constructor called" << END << std::endl;

}

Cat::Cat( const Cat & src )
{
	*this = src;
	std::cout << YEL << "Copy Cat constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << MAG << "Cat destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	this->_type = rhs._type;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Cat const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Cat::makeSound() const
{
	std::cout << "MEOWWWWW" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */