/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:28:27 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/19 16:08:02 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
	
		ShrubberyCreationForm( ShrubberyCreationForm const & src );
		ShrubberyCreationForm( std::string target );
		~ShrubberyCreationForm();

		ShrubberyCreationForm & operator=( ShrubberyCreationForm const & src);

		
	private:
		/* data */
		ShrubberyCreationForm();
		static const std::string	_tree[8];
		const std::string 			_target;
};
