#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define BLU "\e[0;34m"
# define CYN "\e[0;36m"
# define END "\e[0m"

class WrongAnimal
{

	public:

		WrongAnimal();
		WrongAnimal( std::string type );
		WrongAnimal( WrongAnimal const & src );
		~WrongAnimal();

		WrongAnimal &			operator=( WrongAnimal const & rhs );

		const std::string &	getType() const;
		void		makeSound() const;

	protected:
		std::string	type;

};

std::ostream &			operator<<( std::ostream & o, WrongAnimal const & i );

#endif /* ********************************************************** WrongANIMAL_H */