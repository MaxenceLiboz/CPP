/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:14:45 by mliboz            #+#    #+#             */
/*   Updated: 2022/05/25 15:48:56by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate()
{
	int		randomize;

	std::srand((unsigned) time (NULL));
	randomize = std::rand() % 3;
	switch (randomize)
	{
		case 0:
		{
			A *a = new A();
			return (dynamic_cast<Base *>(a));
		}
		case 1:
		{
			B *b = new B();
			return (dynamic_cast<Base *>(b));
		}
		case 2:
		{
			C *c = new C();
			return (dynamic_cast<Base *>(c));
		}
		default:
			break;
	}
	return (NULL);
}

void identify( Base *p )
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "The object pointed by the Base is A" << std::endl;
	if (dynamic_cast<B*>(p) != NULL)
		std::cout << "The object pointed by the Base is B" << std::endl;
	if (dynamic_cast<C*>(p) != NULL)
		std::cout << "The object pointed by the Base is C" << std::endl;
}

void identify( Base &p )
{
	try
	{
		A & a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "The object pointed by the Base is A" << std::endl;
	}
	catch(const std::bad_cast& e) {}
	try
	{
		B & b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "The object pointed by the Base is B" << std::endl;
	}
	catch(const std::bad_cast& e) {}
	try
	{
		C & c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "The object pointed by the Base is C" << std::endl;
	}
	catch(const std::bad_cast& e) {}
}


int main(void)
{
	Base *base;
	A *a = new A();
	B *b = new B();
	C *c = new C();

	std::cout << "Basic test with known variable, shoud be A then B and finally C" << std::endl;
	identify(a);
	identify(b);
	identify(c);
	std::cout << std::endl;

	std::cout << "Now let's use our randomized generator" << std::endl;
	base = generate();
	std::cout << "By pointer: ";
	identify(base);
	std::cout << "By reference: ";
	identify(*base);
	std::cout << std::endl;

	delete base;	
	delete a;	
	delete b;	
	delete c;	
}