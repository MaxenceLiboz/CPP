#include "Cat.hpp"
#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : AAnimal("Cat")
{
	this->_brain = new Brain;
	std::cout << YEL << "Default Cat constructor called" << END << std::endl;
}

Cat::Cat( const Cat & src )
{
	this->_brain = new Brain();
	*this = src;
	std::cout << YEL << "Copy Cat constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete this->_brain;
	std::cout << MAG << "Cat destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	this->_type = rhs._type;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(rhs.getBrain()->getIdea(i), i);
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

const Brain*	Cat::getBrain() const { return (this->_brain); }
Brain*			Cat::getBrain() { return (this->_brain); }

/* ************************************************************************** */