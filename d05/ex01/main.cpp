/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:35:55 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/02 14:39:41 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	try
	{
		Form form("BNSSA", 10, 150);
		Bureaucrat bur("Alex", 10);
		
		std::cout << form << bur;
		
		bur.signForm(form);
		std::cout << form;
		bur.signForm(form);
		
		Form form1("MNS", 10, 150);
		Bureaucrat bur1("Paul", 100);
		
		std::cout << form1 << bur1;
		
		bur1.signForm(form1);
		
		Form form2("BP", 151, 10);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form2("BP", 15, 1000);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form2("BP", -15, 10);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form2("BP", 15, -10);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form form("BP", 15, 10);
		Bureaucrat bur("Bur", 100);

		form.beSigned(bur);
	}
	catch(const std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
}