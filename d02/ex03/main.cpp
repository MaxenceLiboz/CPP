/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:03:51 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/01 14:07:33 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv) {
	Point	a(0, 0);
	Point	b(4.8f, 4.9f);
	Point	c(8.1f, 0.0f);

	if (argc != 3) {
		std::cout << "Use: ./canon [x] [y]" << std::endl;
		return (0);
	}
	Point	point(std::atof(argv[1]), std::atof(argv[2]));

	std::cout << "Point " << GREEN << "A" << a << END << std::endl;
	std::cout << "Point " << GREEN << "B" << b << END << std::endl;
	std::cout << "Point " << GREEN << "C" << c << END << std::endl;
	if (bsp(a, b, c, point) == true)
		std::cout << "Point " << GREEN << "Y" << point << " is inside" << END << std::endl;
	else
		std::cout << "Point " << GREEN << "Y" << point << " is " << RED << "outside" << END << std::endl;
	return (0);
}