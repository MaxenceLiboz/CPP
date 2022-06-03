/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:35:55 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/20 11:11:14by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "main.hpp"
#include "Intern.hpp"

int	main( void )
{
	Intern intern;
	Form *form;
	Form *form1;
	Form *form2;
	Form *form3;
	Bureaucrat aled("ALED", 10);

	try
	{
		form = intern.makeForm("Robotomy request", "MAX");
		form2 = intern.makeForm("Presidential pardon", "MAX2");
		form3 = intern.makeForm("Shrubbery creation", "MAX3");
		aled.signForm(*form);
		aled.signForm(*form2);
		aled.signForm(*form3);
		aled.executeForm(*form);
		aled.executeForm(*form2);
		aled.executeForm(*form3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		form1 = intern.makeForm("robot", "MAX1");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	delete form;
	delete form1;
	delete form2;
	delete form3;
}