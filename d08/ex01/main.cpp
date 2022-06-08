/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:35:05 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/08 13:12:32 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"
#include <list>

void print (const int& n) { std::cout << n << " "; }

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumber(-10);
		sp.addNumber(9);
		sp.addNumber(100000);
		sp.addNumber(-100000);

		Span sp1 = Span(10000);
		sp1.addRandomNumbers(10000);

		Span sp2 = Span(10);
		int arr[] = {10, 2, -100, 1, 4, 1222, 65, -234, -12, 0};
		std::vector<int> vect(arr, arr + 10);
		sp2.addNumbers(vect.begin(), vect.end());

		std::cout << "sp numbers: " << std::endl;
		std::for_each(sp.begin(), sp.end(), print);
		std::cout << std::endl;
		std::cout << "sp1 numbers: " << std::endl;
		std::for_each(sp1.begin(), sp1.begin() + 10, print);
		std::cout << std::endl;
		std::cout << "sp2 numbers: " << std::endl;
		std::for_each(sp2.begin(), sp2.end(), print);
		std::cout << std::endl;

		std::cout << std::endl;
		std::cout << "longest span for sp1: ";
		std::cout << sp1.longestSpan() << std::endl;
		std::cout << "shortest span for sp1: ";
		std::cout << sp1.shortestSpan() << std::endl;

		std::cout << std::endl;
		std::cout << "longest span for sp2: ";
		std::cout << sp2.longestSpan() << std::endl;
		std::cout << "shortest span for sp2: ";
		std::cout << sp2.shortestSpan() << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Span sp3 = Span(1);
		sp3.addNumber(1);
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Span sp3 = Span(1);
		sp3.addNumber(1);
		sp3.addNumber(2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}