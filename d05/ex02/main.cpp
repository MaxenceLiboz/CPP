/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:35:55 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/20 09:00:51 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "main.hpp"

int	main( void )
{

	ShrubberyCreationForm form("NCP");
	Bureaucrat bur("ALED", 145);
	bur.signForm(form);
	bur.executeForm(form);
	std::cout << form;	
	try
	{
		ShrubberyCreationForm test("target");
		RobotomyRequestForm test1("target1");
		PresidentialPardonForm test2("target2");
		Bureaucrat bur("bur", 10);

		bur.signForm(test);			
		test.execute( bur );
		bur.signForm(test1);			
		test1.execute( bur );
		bur.signForm(test2);			
		test2.execute( bur );
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

	try
	{
		ShrubberyCreationForm test("target1");
		Bureaucrat bur("bur", 145);

		bur.signForm(test);			
		test.execute( bur );
	}
	catch(const Form::GradeToLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}