#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define BLU "\e[0;34m"
# define CYN "\e[0;36m"
# define END "\e[0m"

class Animal
{

	public:

		Animal();
		Animal( std::string type );
		Animal( Animal const & src );
		virtual ~Animal();

		Animal &			operator=( Animal const & rhs );

		const std::string &	getType() const;
		virtual void		makeSound() const;

	protected:
		std::string	type;

};

std::ostream &			operator<<( std::ostream & o, Animal const & i );

#endif /* ********************************************************** ANIMAL_H */