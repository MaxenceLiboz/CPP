/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 13:03:51 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/31 14:54:01 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

float	getArea(Point const a, Point const b, Point const c) {
	return std::abs((a.getX() * (b.getY() - c.getY())
					+ b.getX() * (c.getY() - a.getY())
					+ c.getX() * (a.getY() - b.getY()))
					* 0.5f);
}


bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	float	total_area;
	float	area1;
	float	area2;
	float	area3;

	total_area = getArea(a, b, c);
	area1 = getArea(a, b, point);
	area2 = getArea(a, c, point);
	area3 = getArea(b, c, point);

	return (total_area == area1 + area2 + area3);
}

int main(int argc, char **argv) {
	Point	a(0, 0);
	Point	b(4.8f, 4.9f);
	Point	c(8.1f, 0.0f);

	if (argc != 3) {
		std::cout << "Use: ./canon [x] [y]" << std::endl;
		return (0);
	}
	Point	point(std::atof(argv[1]), std::atof(argv[2]));

	std::cout << "A" << a << "; B" << b << "; C" << c << std::endl;
	if (bsp(a, b, c, point) == true)
		std::cout << "Point" << point << " is inside" << std::endl;
	else
		std::cout << "Point" << point << " is outside" << std::endl;
	return (0);
}