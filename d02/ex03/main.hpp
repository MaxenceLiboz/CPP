/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mliboz <mliboz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:02:09 by mliboz            #+#    #+#             */
/*   Updated: 2022/04/01 14:06:08 by mliboz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include "Fixed.hpp"
#include "Point.hpp"
#define RED "\e[1;31m"
#define GREEN "\e[1;32m"
#define END "\033[0m"

bool	bsp(Point const a, Point const b, Point const c, Point const point);
#endif