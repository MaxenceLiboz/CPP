/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:20:52 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/19 14:02:47 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

class Form;
#include "Bureaucrat.hpp"
#include "main.hpp"

class Form
{
	public:
	
		Form();
		Form( Form const & src );
		Form( std::string name, int signGrade, int execGrade );
		~Form();

		Form & operator=( Form const & src );

		void	beSigned( Bureaucrat & src);
		
		const std::string	getName() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool 				getSigned() const;


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
		
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
};

std::ostream &	operator<<( std::ostream & o, Form const & src);

#endif