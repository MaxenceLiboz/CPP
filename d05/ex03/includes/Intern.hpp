/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 08:58:47 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/20 11:02:25 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "Form.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & var);
		~Intern();

		Intern & operator=(Intern const & var);

		Form *	makeForm( std::string name, std::string target );
		int		getIndex( std::string name );

	private:
		static const std::string _forms[3];
};

std::ostream & operator<<(std::ostream & o, Intern const & var);
