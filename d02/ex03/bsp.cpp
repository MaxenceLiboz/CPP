/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:01:42 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/04 09:22:26 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

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

	if (area1 == 0 || area2 == 0 || area3 == 0)
		return (false);

	return (total_area == area1 + area2 + area3);
}