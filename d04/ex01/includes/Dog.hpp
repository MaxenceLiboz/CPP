#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

	public:

		Dog();
		Dog( Dog const & src );
		virtual ~Dog();

		Dog &		operator=( Dog const & rhs );

		virtual void	makeSound() const;
		const Brain*	getBrain() const;
		Brain*			getBrain();

	private:
		Brain* _brain;

};

std::ostream &			operator<<( std::ostream & o, Dog const & i );

#endif /* ************************************************************* CAT_H */