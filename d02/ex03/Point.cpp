/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:14:19 by mliboz            #+#    #+#             */
/*   Updated: 2022/03/21 14:57:07 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	Point::_fixed_point_fractional_bits = 8;

Point::Point(void) : _x(0), _y(0) {}

Point::Point(Point const & point) {
	*this = point;
}

Point::Point(float x, float y) {
	this->_x = x;
	this->_y = y;
}

Point & Point::operator=(Point const & point) {
	this->_x = point._x.toFloat();
	this->_y = point._y.toFloat();
	return *this;
}

float	Point::getX(void) const { return this->_x.toFloat(); }
float	Point::getY(void) const { return this->_y.toFloat(); }

std::ostream & operator<<(std::ostream & o, Point const & src) {
	o << "(" << src.getX() << ", " << src.getY() << ")";
	return o;
}