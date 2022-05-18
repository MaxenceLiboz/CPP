#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{

	public:

		Brain();
		Brain( Brain const & src );
		~Brain();

		Brain &				operator=( Brain const & rhs );
		const std::string &	getIdea( unsigned int index ) const;
		void				setIdea( std::string idea, unsigned int position );
		void				setIdeas( std::string ideas[100] );
		

	private:
		std::string	ideas[100];

};

std::ostream &			operator<<( std::ostream & o, Brain const & i );

#endif /* *********************************************************** BRAIN_H */