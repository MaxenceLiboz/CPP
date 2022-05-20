/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 10:20:52 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/20 11:09:43 by mliboz           ###   ########.fr       */
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
		virtual ~Form();

		Form & operator=( Form const & src );

		void	beSigned( Bureaucrat & src);
		
		const std::string	getName() const;
		const std::string	getTarget() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		bool 				getSigned() const;

		virtual void		execute( Bureaucrat const & executor ) const = 0;

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
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class FormAlreadySignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
		std::string			_target;
};

std::ostream &	operator<<( std::ostream & o, Form const & src);

#endif