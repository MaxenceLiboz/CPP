#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{

	public:

		Cat();
		Cat( Cat const & src );
		virtual ~Cat();

		Cat &		operator=( Cat const & rhs );

		virtual void	makeSound() const;
		const Brain*	getBrain() const;
		Brain*			getBrain();

	private:
		Brain* _brain;

};

std::ostream &			operator<<( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */