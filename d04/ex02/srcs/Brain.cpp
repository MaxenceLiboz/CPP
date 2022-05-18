#include "Brain.hpp"
#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << GRN << "Default Brain constructor called" << END << std::endl;
}

Brain::Brain( const Brain & src )
{
	*this = src;
	std::cout << GRN << "Copy Brain constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << RED << "Brain destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	for (int i = 0; i < 100; i++)
		this->ideas[i].assign(rhs.ideas[i]);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Brain const & i )
{
	o << "Check all the ideas: " << std::endl;
	for (int j = 0; j < 100; j++)
		o << i.getIdea(j) << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

const std::string & Brain::getIdea( unsigned int index) const { return (this->ideas[index]); }

void	Brain::setIdea( std::string idea, unsigned int position )
{
	if (position < 100)
		this->ideas[position] = idea;
	else
		std::cout << "Position over 100" << std::endl;
}

void	Brain::setIdeas( std::string ideas[100])
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */