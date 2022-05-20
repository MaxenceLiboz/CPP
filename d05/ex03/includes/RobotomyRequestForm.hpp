/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:28:27 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/19 15:56:10 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Form.hpp"


class RobotomyRequestForm : public Form
{
	public:
	
		RobotomyRequestForm( RobotomyRequestForm const & src );
		RobotomyRequestForm( std::string target );
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=( RobotomyRequestForm const & src);

		
		void	execute( Bureaucrat const & exectuor ) const;
	private:
		/* data */
		RobotomyRequestForm();
		const std::string 			_target;
};
