/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:28:27 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/19 15:56:10 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Form.hpp"


class PresidentialPardonForm : public Form
{
	public:
	
		PresidentialPardonForm( PresidentialPardonForm const & src );
		PresidentialPardonForm( std::string target );
		~PresidentialPardonForm();

		PresidentialPardonForm & operator=( PresidentialPardonForm const & src);

		
		void	execute( Bureaucrat const & exectuor ) const;
	private:
	
		PresidentialPardonForm();
		const std::string 			_target;
};
