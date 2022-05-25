#include "Dog.hpp"
#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : AAnimal("Dog")
{
	this->_brain = new Brain;
	std::cout << BLU << "Default Dog constructor called" << END << std::endl;
}

Dog::Dog( const Dog & src )
{
	this->_brain = new Brain();
	*this = src;
	std::cout << BLU << "Copy Dog constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete this->_brain;
	std::cout << CYN << "Dog destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &				Dog::operator=( Dog const & rhs )
{
	this->_type = rhs._type;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(rhs.getBrain()->getIdea(i), i);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Dog const & i )
{
	o << i.getType();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Dog::makeSound() const
{
	std::cout << "WOOOAFFF" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const Brain*	Dog::getBrain() const { return (this->_brain); }
Brain*			Dog::getBrain() { return (this->_brain); }

/* ************************************************************************** */