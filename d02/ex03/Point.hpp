#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(Point const & point);
		Point(float x, float y);
		~Point(){};

		Point & operator=(Point const & point);

		float	getX(void) const;
		float	getY(void) const;

	private:
		Fixed	_x;
		Fixed	_y;
		static int		_fixed_point_fractional_bits;
};

std::ostream & operator<<(std::ostream & o, Point const & src);

#endif