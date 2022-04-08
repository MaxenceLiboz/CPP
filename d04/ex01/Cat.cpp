#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	this->brain = new Brain;
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
	delete this->brain;
	std::cout << MAG << "Cat destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &				Cat::operator=( Cat const & rhs )
{
	this->type = rhs.type;
	this->brain = rhs.brain;
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

const Brain*	Cat::getBrain() const { return (this->brain); }

void			Cat::setBrain( unsigned int index, std::string idea)
{
	this->brain->ideas[index] = idea;
}

void			Cat::setBrain( std::string ideas[100])
{
	for (int i = 0; i < 100; i++)
		this->brain->ideas[i] = ideas[i];
}

/* ************************************************************************** */