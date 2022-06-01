/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:35:05 by mliboz            #+#    #+#             */
/*   Updated: 2022/06/01 11:54:16 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.class.hpp"

void print (const int& n) { std::cout << " " << n; }

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

		std::for_each(sp.begin(), sp.end(), print);
		std::for_each(sp1.begin(), sp1.end(), print);
		std::cout << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
		std::cout << sp1.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}