#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define END "\033[0m"
#define BLUE "\033[0;34m"
#define PURPLE "\033[0;35m"
#define YELLOW "\e[0;33m"
#define MAGENTA "\e[0;35m"

class ClapTrap
{

	public:

		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &		operator=( ClapTrap const & rhs );

		void	attack( const std::string & target );
		void	takeDamage( unsigned int amount );
		void	beRepaired( unsigned int amount );

		std::string		getName() const;
		unsigned int	getHitPoint() const;
		unsigned int	getEnergyPoint() const;
		unsigned int	getAttackDamage() const;

	protected:

		ClapTrap();
		std::string	_name;
		unsigned int			_hitPoint;
		unsigned int			_energyPoint;
		unsigned int			_attackDamage;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */