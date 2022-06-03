/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:28:27 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/03 10:43:54 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	public:
	
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm( std::string target );
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & src);

		void	execute( Bureaucrat const & exectuor ) const;
		class OpenAndCreateFileException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

	private:
		/* data */
		ShrubberyCreationForm();
		static const std::string	_tree[8];
		const std::string 			_target;
};
