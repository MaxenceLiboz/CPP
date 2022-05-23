#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hitPoint = this->setHitPoint();
	this->_energyPoint = this->setEnergyPoint();
	this->_attackDamage = this->setAttackDamage();
	std::cout << BLUE << "ScavTrap default constructor called" << END << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoint = this->setHitPoint();
	this->_energyPoint = this->setEnergyPoint();
	this->_attackDamage = this->setAttackDamage();
	std::cout << BLUE << "ScavTrap string constructor called" << END << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	*this = src;
	std::cout << BLUE << "ScavTrap copy constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << PURPLE << "ScavTrap destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoint = rhs._energyPoint;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "Scavtrap " << i.getName() << "\thave " << i.getHitPoint() << " hit points";
	o << ", " << i.getEnergyPoint() << " energy points, " << i.getAttackDamage();
	o << " attack damage." << std::endl;
	return o;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::guardGate() const
{
	if (this->_hitPoint > 0)
		std::cout << "ScavTrap " << this->getName() << " entered in gate keeper mode !" << std::endl;
}

void	ScavTrap::attack( const std::string & target )
{
	if (this->getHitPoint() > 0 || this->getEnergyPoint() > 0)
	{
		std::cout << "ScavTrap " << this->getName() << " is attacking " << target;
		std::cout << ", causing " << this->getAttackDamage();
		std::cout << " damage points." << std::endl;
		this->_energyPoint -= 1;
	}
}

unsigned int	ScavTrap::setHitPoint() { return(100); }
unsigned int	ScavTrap::setEnergyPoint() { return(50); }
unsigned int	ScavTrap::setAttackDamage() { return(20); }


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */