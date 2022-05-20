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
	form = intern.makeForm("Robotomy request", "MAX");
	form1 = intern.makeForm("robot", "MAX1");
	form2 = intern.makeForm("Presidential pardon", "MAX2");
	form3 = intern.makeForm("Shrubbery creation", "MAX3");
	Bureaucrat aled("ALED", 10);

	try
	{
		aled.signForm(*form);
		aled.executeForm(*form);
	}
	catch(const Form::GradeToHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Form::GradeToLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Form::FormAlreadySignedException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Form::FormNotSignedException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const ShrubberyCreationForm::OpenAndCreateFileException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	delete form;
	delete form1;
	delete form2;
	delete form3;
}