#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << YELLOW << "FragTrap default constructor called" << END << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << YELLOW << "FragTrap string constructor called" << END << std::endl;
}

FragTrap::FragTrap( const FragTrap & src )
{
	*this = src;
	std::cout << YELLOW << "ClapTrap copy constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << YELLOW << "FragTrap destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	this->_name = rhs._name;
	this->_energyPoint = rhs._energyPoint;
	this->_hitPoint = rhs._hitPoint;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	o << "FragTrap " << i.getName() << "\thave " << i.getHitPoint() << " hit points";
	o << ", " << i.getEnergyPoint() << " energy points, " << i.getAttackDamage();
	o << " attack damage." << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::highFiveGuys() const
{
	if (this->_hitPoint > 0)
		std::cout << "FragTrap " << this->_name << " is asking everyone to high five !" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */