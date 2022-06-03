/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 08:35:55 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/02 14:36:38 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	Bureaucrat *bur1 = new Bureaucrat("James", 150);
	try
	{	
		std::cout << *bur1;
		bur1->incrementGrade();
		std::cout << *bur1;
		bur1->decrementGrade();
		std::cout << *bur1;
		bur1->decrementGrade();
		std::cout << *bur1;
		delete bur1;
	}
	catch(const std::exception & e)
	{
		delete bur1;
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bur2( "bur2", -100);
		
		std::cout << bur2;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bur3( "bur3", 10);
		
		for (int i = 0; i < 10; i++)
		{
			bur3.incrementGrade();
			std::cout << bur3;
		}
	}
	catch(const Bureaucrat::GradeToHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeToLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}