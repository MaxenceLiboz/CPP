/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:09:59 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/19 14:02:57 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Bureaucrat;
#include "Form.hpp"
#include "main.hpp"


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
		void				signForm( Form & form );


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