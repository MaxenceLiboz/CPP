#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define BLU "\e[0;34m"
# define CYN "\e[0;36m"
# define END "\e[0m"

class AAnimal
{

	public:

		AAnimal();
		AAnimal( std::string type );
		AAnimal( AAnimal const & src );
		virtual ~AAnimal();

		AAnimal &			operator=( AAnimal const & rhs );

		const std::string &	getType() const;
		virtual void		makeSound() const = 0;

	protected:
	
		std::string	_type;

};

std::ostream &			operator<<( std::ostream & o, AAnimal const & i );

#endif /* ********************************************************** ANIMAL_H */