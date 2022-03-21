/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:03:51 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/21 11:15:06 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {
	Fixed a (10);
	Fixed b(2);
	Fixed op;
	Fixed const c(42.42f);
	Fixed const d(b);
	
	std::cout << "True == " << true << "; False == " << false << std::endl << std::endl;
	
	std::cout << "a = " << a << "; b = " << b << std::endl;
	std::cout << "a > b == " << (a > b) << std::endl;
	std::cout << "a < b == " << (a < b) << std::endl << std::endl;
	
	a = b = 12;
	std::cout << "a = " << a << "; b = " << b << std::endl;
	std::cout << "a >= b == " << (a >= b) << std::endl;
	std::cout << "a <= b == " << (a <= b) << std::endl;
	std::cout << "a == b == " << (a == b) << std::endl;
	std::cout << "a != b == " << (a != b) << std::endl << std::endl;

	a = 10;
	b = 2;
	std::cout << "a = " << a << "; b = " << b << "; op = " << op << std::endl;
	std::cout << "op == a + b == " << (op = a + b) << std::endl;
	std::cout << "op == a - b == " << (op = a - b) << std::endl;
	std::cout << "op == a * b == " << (op = a * b) << std::endl;
	std::cout << "op == a / b == " << (op = a / b) << std::endl << std::endl;
	
	a = 0;
	std::cout << "a == " << a << std::endl;
	std::cout << "++a == " << ++a << std::endl;
	std::cout << "a == " << a << std::endl;
	std::cout << "a++ == " << a++ << std::endl;
	std::cout << "a == " << a << std::endl << std::endl;

	std::cout << "a = " << a << "; b = " << b << std::endl;
	std::cout << "min(a, b) == " << Fixed::min( a, b ) << std::endl;
	std::cout << "max(a, b) == " << Fixed::max( a, b ) << std::endl << std::endl;
	
	std::cout << "c = " << c << "; d = " << d << std::endl;
	std::cout << "min(c, d) == " << Fixed::min(c, d) << std::endl;
	std::cout << "max(c, d) == " << Fixed::max(c, d) << std::endl;
	return 0;
}