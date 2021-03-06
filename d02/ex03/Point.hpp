#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(Point const & point);
		Point(float x, float y);
		~Point();


		float	getX(void) const;
		float	getY(void) const;

		Point & operator=(Point const & point);
	private:
		const Fixed	_x;
		const Fixed	_y;
		static int		_fixed_point_fractional_bits;
		
};

std::ostream & operator<<(std::ostream & o, Point const & src);

#endif