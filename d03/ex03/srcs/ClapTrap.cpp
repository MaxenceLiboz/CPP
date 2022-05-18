
#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _name("Default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << GREEN << "ClapTrap default constructor called" << END << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << GREEN << "ClapTrap string constructor called" << END << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	*this = src;
	std::cout << GREEN << "ClapTrap copy constructor called" << END << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << RED << "ClapTrap destructor called" << END << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	this->_name = rhs.getName();
	this->_hitPoint = rhs.getHitPoint();
	this->_energyPoint = rhs.getEnergyPoint();
	this->_attackDamage = rhs.getAttackDamage();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << "ClapTrap " << i.getName() << "\thave " << i.getHitPoint() << " hit points";
	o << ", " << i.getEnergyPoint() << " energy points, " << i.getAttackDamage();
	o << " attack damage." << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::attack( const std::string & target)
{
	if (this->getHitPoint() > 0 && this->getEnergyPoint() > 0)
	{
		std::cout << "CalpTrap " << this->getName() << " is attacking " << target << ", causing ";
		std::cout << this->getAttackDamage() << " damage points" << std::endl; 
		this->_energyPoint -= 1;
	}
	else
		std::cout << this->_name << " can't attack." << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount )
{
	if (this->getHitPoint() > 0 && this->getEnergyPoint() > 0 && amount >= 0)
	{
		std::cout << "CalpTrap " <<  this->getName() << " is repairing " << amount << " hit points." << std::endl;
		this->_hitPoint += amount;
		this->_energyPoint -= 1;
	}
	else
		std::cout << "CalpTrap " <<  this->_name << " can't repair." << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount )
{
	if (amount >= 0 && this->_hitPoint - amount >= 0 && this->_hitPoint - amount <= this->_hitPoint)
	{
		std::cout << "CalpTrap " <<  this->getName() << " is taking " << amount << " damages." << std::endl;
		this->_hitPoint -= amount;
	}
	else
	{
		std::cout << "Enter a positive amount, if " << this->_name << " already has 0 hits points";
		std::cout << " he/she can't take damage anymore" << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string		ClapTrap::getName() const { return (this->_name); }
unsigned int	ClapTrap::getHitPoint() const { return (this->_hitPoint); }
unsigned int	ClapTrap::getEnergyPoint() const { return (this->_energyPoint); }
unsigned int	ClapTrap::getAttackDamage() const { return (this->_attackDamage); }

/* ************************************************************************** */