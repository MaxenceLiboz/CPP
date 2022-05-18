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

// Regular Colors
#define Black "\033[0;30m"        
#define Red "\033[0;31m"          
#define Green "\033[0;32m"        
#define Yellow "\033[0;33m"       
#define Blue "\033[0;34m"         
#define Purple "\033[0;35m"       
#define Cyan "\033[0;36m"         
#define White "\033[0;37m"        

// Bold
#define BBlack "\033[1;30m"       
#define BRed "\033[1;31m"         
#define BGreen "\033[1;32m"       
#define BYellow "\033[1;33m"      
#define BBlue "\033[1;34m"        
#define BPurple "\033[1;35m"      
#define BCyan "\033[1;36m"        
#define BWhite "\033[1;37m"       

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