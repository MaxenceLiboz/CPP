/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:09:59 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/19 11:25:37 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define MAG "\e[0;35m"
# define BLU "\e[0;34m"
# define CYN "\e[0;36m"
# define END "\e[0m"

// Bold
#define BBlack "\033[1;30m"       
#define BRed "\033[1;31m"         
#define BGreen "\033[1;32m"       
#define BYellow "\033[1;33m"      
#define BBlue "\033[1;34m"        
#define BPurple "\033[1;35m"      
#define BCyan "\033[1;36m"        
#define BWhite "\033[1;37m"  

class Bureaucrat
{
	public:
	
		Bureaucrat();
		Bureaucrat( Bureaucrat const & src );
		Bureaucrat( std::string name, int grade );
		~Bureaucrat();

		Bureaucrat & operator=( Bureaucrat const & src );

		const std::string	getName() const;
		int					getGrade() const;
		void				setGrade( int new_grade );

		void				incrementGrade();
		void				decrementGrade();

		class GradeToLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeToHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
	
	private:

		const	std::string _name;
		int		_grade;

	
};

std::ostream & operator<<( std::ostream & o, Bureaucrat const & src );


#endif